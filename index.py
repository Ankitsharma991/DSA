from flask import Flask, Response
from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.chrome.options import Options as ChromeOptions  # Import for Chrome options

app = Flask(__name__)
import time

options = ChromeOptions()  # Change to ChromeOptions
options.add_argument("--headless")
options.add_argument("--disable-gpu")
options.add_argument("--no-sandbox")
options.add_argument("--disable-dev-shm-usage")
driver = webdriver.Chrome(options=options)  # Change to webdriver.Chrome

link = input("Enter EvaluationLink: ")
username = input("Enter your username: ")
password = input("Password:")
namahshivaya_script = """
function sleep(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
}
async function namahshivaya(){
    button=document.getElementById("form-branch::submitEvaluation");

    document.getElementById(`form-branch::categorySection::itemrow::renderedItem::nextrow:1:verticalDisplay::scaleOption:0:radioValue`).checked=true;

    for(let j=1;j<=20;j++){
        if(document.getElementById(`form-branch::categorySection::itemrow:${j}:renderedItem::nextrow:${j+1}:verticalDisplay::scaleOption:0:radioValue`)===null)
        {
            continue;
        }
        else{
            document.getElementById(`form-branch::categorySection::itemrow:${j}:renderedItem::nextrow:${j+1}:verticalDisplay::scaleOption:0:radioValue`).checked=true;
        }
    }

    for(let j=1;j<=20;j++){
        if(document.getElementById(`form-branch::categorySection::itemrow:${j}:renderedItem::nextrow:${j+1}:verticalDisplay::scaleOptions:0:choiceValue`)===null){
        continue;
        }
        else{
            document.getElementById(`form-branch::categorySection::itemrow:${j}:renderedItem::nextrow:${j+1}:verticalDisplay::scaleOptions:0:choiceValue`).checked=true;
        }
    }

    await sleep(3000);
    button.click();
}
namahshivaya();
"""
try:
  driver.get(link)
  username_field = driver.find_element("css selector", "#username")
  password_field = driver.find_element("css selector", "#password")
  submit_button = driver.find_element("class name", "btn-submit")

  username_field.send_keys(username)
  password_field.send_keys(password)
  time.sleep(2)
  submit_button.click()
  time.sleep(2)
  iframe = driver.find_element(By.CSS_SELECTOR, 'iframe')
  driver.switch_to.frame(iframe)
  table = WebDriverWait(driver, 20).until(
      EC.presence_of_element_located((By.CSS_SELECTOR, 'table.evalsysTable')))
  links = table.find_elements("css selector", "a")
  links_list = [link.get_attribute('href') for link in links]
  print(len(links_list), "surveys to complete.")
  count = 1
  for link in links_list:
    driver.get(link)
    try:
      driver.execute_script(namahshivaya_script)
      print("Finishing Survey", count, "/", len(links_list))
      time.sleep(5)
      count += 1
    except StaleElementReferenceException:
      driver.refresh()
      driver.execute_script(namahshivaya_script)
      print("Finishing Survey", count, "/", len(links_list))
      time.sleep(2)
      count += 1
finally:
  print("Verify and close.")
  driver.quit()
