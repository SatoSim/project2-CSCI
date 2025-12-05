#include <iostream>
//#include "bfs_compute_distances.h"
#include "adjacency_list.h"
using namespace std;


void test_helper( ){
    // input is an adjacency matrix and a expected answer 

    // run the adjacency matrix through the distances function

    // compare output to expected answer 

    // if the same return true, otherwise false. 


    
}

void test_short_distance() {
 
    bool status = true; // change status if testing goes wrong 

    // adjacency matrices 
    // 5 examples 
    int vertices = 16;
    AdjacencyList list(vertices);
    

    // Example 1 
    // creating adjacency list 


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
