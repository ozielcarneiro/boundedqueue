/* 
 * File:   main.cpp
 * Author: Oziel de Oliveira Carneiro
 *
 * Created on October 15, 2012, 1:33 PM
 * Last update on October 26, 2012, 4:11 PM
 */

#include <cstdlib>
#include <iostream>

#include "boundedQueue.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int size = 0;
    cout << "Enter queue size (-1 to quit):" << endl;
    cin >> size;
    while (size <= 0) {
        if(size==-1) return 0;
        cout << "Not a valid size. Enter queue size (-1 to quit):" << endl;
        cin >> size;
    }
    boundedQueue queue(size);
    
    int in = 0;
    
    while (in != 3) {
        cout << "Choose a option:\n1 - Enqueue a value\n2 - Dequeue a value\n3 - End run"<< endl;
        cin >> in;
        if (in == 1) {
            cout << "Enter value:" << endl;
            cin >> in;
            queue.enqueue(in);
        } else if(in == 2){
            in = queue.dequeue();
            cout << in << endl;
        }
        queue.printQueue();
    }
    return 0;
}

