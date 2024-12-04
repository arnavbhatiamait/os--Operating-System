#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <array>
#include <math.h>
#include <thread>

#include <unistd.h>  
using namespace std;
void taskA(){
    for (int i = 0; i <10; i++){
        sleep(1);
        printf("TasksA : %d\n", i);
        fflush(stdout);
    }
}
void taskB(){
    for (int i = 0; i <10; i++){
        sleep(1);
        printf("Tasks B: %d\n", i);
        fflush(stdout);
    }
}
int main()
{
    cout<<"Tasks B";
    thread ti(taskA);
    thread t2(taskB);
    ti.join();
    t2.join();
    
    return 0;
}