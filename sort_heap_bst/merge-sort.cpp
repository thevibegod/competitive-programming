// https://practice.geeksforgeeks.org/problems/merge-sort/1

// Merge Sort is a Divide and Conquer algorithm. It repeatedly divides the array into two halves and combines them in sorted manner. 




void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}
void merge(int arr[], int l, int m, int r)
{
     int new_arr[r-l+1];
     int i = l,j=m+1;
     int count = 0;
     while(i<=m&&j<=r){
         if(arr[i]<arr[j]){
             new_arr[count] = arr[i];
             i++;
             
         }
         else{
             new_arr[count] = arr[j];
             j++;
         }
         count++;
     }
     while(i<=m){
         new_arr[count] = arr[i];
         i++;
         count++;
     }
     while(j<=r){
         new_arr[count] = arr[j];
         j++;
         count++;
     }
     count = 0;
     i = l;
     while(count<r-l+1){
         arr[i] = new_arr[count];
         count++;
         i++;
     }
}