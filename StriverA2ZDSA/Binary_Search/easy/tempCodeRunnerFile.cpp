using namespace std;

int firstOccurrence(vector<int> &arr, int k)
{
    int low = 0;
    int n = arr.size();
    int high = n - 1;
    int first = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == k)
        {
            first = mid;
            high = mid - 1;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return first;
}

int lastOccurrence(vector<int> &arr, int k)
{
    int low = 0;
    int n = arr.size();
    int high = n - 1;
    int last = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == k)
        {
            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else
        {