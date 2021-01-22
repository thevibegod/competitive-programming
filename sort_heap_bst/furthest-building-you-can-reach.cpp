// https://leetcode.com/problems/furthest-building-you-can-reach/

// You are given an integer array heights representing the heights of buildings, some bricks, and some ladders.

// You start your journey from building 0 and move to the next building by possibly using bricks or ladders.

// While moving from building i to building i+1 (0-indexed),

// If the current building's height is greater than or equal to the next building's height, you do not need a ladder or bricks.
// If the current building's height is less than the next building's height, you can either use one ladder or (h[i+1] - h[i]) bricks.
// Return the furthest building index (0-indexed) you can reach if you use the given ladders and bricks optimally.

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
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        MaxHeap heap(heights.size());
        int usedBricks = 0,i = 0;
        for(;i<heights.size()-1;i++){
            int diff = heights[i] - heights[i+1];
            if(diff<0){
                   heap.insert(diff); 
                if(heap.heap_size>ladders){
                    if(usedBricks+heap.heap[0]+bricks<0){
                        return i;
                    }
                    usedBricks += heap.pop_max();
                }
            }
        }
        return i;
    }
};