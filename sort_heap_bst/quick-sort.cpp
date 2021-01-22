// https://practice.geeksforgeeks.org/problems/quick-sort/1

// Quick Sort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot.

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

void quickSort(int arr[], int low, int high)
{
    if(low<high){
        int p = partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);  
    }
    return;
}


int partition (int arr[], int low, int high)
{
   int pivot = arr[high];
   int i = low-1;
   
   for(int j = low;j<high;j++){
       if(arr[j]<=pivot){
           i++;
           swap(arr[i],arr[j]);
           
       }
   }
   swap(arr[i+1],arr[high]);
   return i+1;
}