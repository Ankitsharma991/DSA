
        int arr1[n];

        int j=0,k=0;

        for(int i=0;i<n;i++){

            if(arr[i]>=0){

                arr[j++]=arr[i];

            }

            else{

                arr1[k++]=arr[i];

            } 

        }

        for(int i=0;i<k;i++){

           arr[j++]=arr1[i]; 

        }