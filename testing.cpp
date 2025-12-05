#include <iostream>
#include "bfs_compute_distances.h"
#include "adjacency_list.h"
using namespace std;


bool test_helper(AdjacencyList list, int answer){
    // input is an adjacency matrix and a expected answer 

    // run the adjacency matrix through the distances function
    int dist = compute_distances(list);

    // compare output to expected answer 

    // if the same return true, otherwise false. 

    if(dist == answer){
        return true;
    }
    else{
        return false;
    }
}

void test_short_distance() {
 
    bool status = true; // change status if testing goes wrong 

    // adjacency matrices 
    // 5 examples 
    

    // Example 1 
    // creating adjacency list 

    int vertices = 12;
    AdjacencyList list(vertices);
    list.addEdge(0, 1);
    list.addEdge(0, 4);
    list.addEdge(1, 2);
    list.addEdge(1, 5);
    list.addEdge(2, 6);
    list.addEdge(4, 5);
    list.addEdge(4, 8);
    list.addEdge(5, 6);
    list.addEdge(6, 7);
    list.addEdge(6, 10);
    list.addEdge(7,11);
    list.addEdge(8, 12);
    list.addEdge(10, 11);
    list.addEdge(10, 12); 
    list.addEdge(11, 15);
    list.addEdge(12, 13);
    list.addEdge(13, 14);
    list.addEdge(14, 15);


    list.printList();


    // Example 2
    int vertices = 16;
    AdjacencyList list2(vertices);
    list2.addEdge(0, 1);
    list2.addEdge(0, 4);
    list2.addEdge(1, 2);
    list2.addEdge(1, 5);
    list2.addEdge(2, 6);
    list2.addEdge(4, 5);
    list2.addEdge(4, 8);
    list2.addEdge(5, 6);
    list2.addEdge(6, 7);
    list2.addEdge(6, 10);
    list2.addEdge(7,11);
    list2.addEdge(8, 12);
    list2.addEdge(10, 11);
    list2.addEdge(10, 12); 
    list2.addEdge(11, 15);
    list2.addEdge(12, 13);
    list2.addEdge(13, 14);
    list2.addEdge(14, 15);
    list2.printList();
    list.getN(6);

    // Example 3
    int vertices = 16;
    AdjacencyList list2(vertices);
    list2.addEdge(0, 1);
    list2.addEdge(0, 4);
    list2.addEdge(1, 2);
    list2.addEdge(1, 5);
    list2.addEdge(2, 6);
    list2.addEdge(4, 5);
    list2.addEdge(4, 8);
    list2.addEdge(5, 6);
    list2.addEdge(6, 7);
    list2.addEdge(6, 10);
    list2.addEdge(7,11);
    list2.addEdge(8, 12);
    list2.addEdge(10, 11);
    list2.addEdge(10, 12); 
    list2.addEdge(11, 15);
    list2.addEdge(12, 13);
    list2.addEdge(13, 14);
    list2.addEdge(14, 15);
    list2.printList();
    list.getN(6);
	
	




    //status = test_helper(matrix_num, correct_answer);


    if(status){
        cout<<"Everything is correct wohoooo!";
    }else{
        cout<<"Get back to think and code!";
    }
    

}

int main() {
    test_short_distance();
    return 0;
}
