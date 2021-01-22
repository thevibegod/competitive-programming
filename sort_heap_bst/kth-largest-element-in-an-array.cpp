// https://leetcode.com/problems/kth-largest-element-in-an-array/

// Find the kth largest element in an unsorted array. Note that it is the kth largest element in the sorted order, not the kth distinct element.


class Solution {
public:
    class MaxHeap{
public:
    int heap_size;
    int* heap;
    int parent(int child){
        return (child-1)/2;
    }
    int left(int parent){
        return 2*parent+1;
    }
    int right(int parent){
        return 2*parent+2;
    }
    MaxHeap(int cap){
        heap = new int[cap];
        heap_size = 0;
    }
    void insert(int val){
        heap[heap_size] = val;
        int index = heap_size;
        heap_size++;

        while(index != 0 && heap[index]>heap[parent(index)]){
            swap(heap[index],heap[parent(index)]);
            index = parent(index);
        }
    }
    int pop_max(){
        int current_index = 0;
        int val = heap[current_index];
        heap[current_index] = heap[heap_size-1];
        heap_size--;
        while(true){
            int largest = current_index;
            int left_index = left(current_index);
            int right_index = right(current_index);
            if(left_index<=heap_size-1 && heap[left_index]>heap[largest]){
                largest = left_index;
            }
            if(right_index<=heap_size-1 && heap[right_index]>heap[largest]){
                largest = right_index;
            }
            if(largest==current_index){
                return val;
            }else{
                swap(heap[largest],heap[current_index]);
                current_index = largest;
            }
        }
    }

};
    int findKthLargest(vector<int>& nums, int k) {
    MaxHeap heap(nums.size());
    for(auto num:nums){
        heap.insert(num);
    }
    for(int i=0;i<k-1;i++){
        heap.pop_max();
    }
    return heap.pop_max();
}
};