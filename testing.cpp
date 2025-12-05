#include <iostream>
//#include "bfs_compute_distances.h"
#include "adjacency_list.h"
using namespace std;


void test_helper( ){
    // input is an adjacency matrix 


    
}

void test_short_distance() {
 
    bool status = true; // change status if testing goes wrong 

    // adjacency matrices 
    // 5 examples 
    int vertices = 3;
    AdjacencyList list(vertices);
    

    // Example 1 
    // creating adjacency list 

    
    list.addEdge(0, 1);
    list.addEdge(0, 2);
    list.printList();

    list.getN(0);
	




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
