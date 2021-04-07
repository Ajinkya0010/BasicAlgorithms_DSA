#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    vector <int> A;
    int n=0,i=1,j;
    cout<<"Enter the numbers and to exit the loop press -1";
    while (1){
        cin>>n;
        if (n==-1)
            break;
        A.push_back(n);
    }
    
    //A.insert(A.begin() + 2,10); A.erase(A.begin()+6);                will insert at 3rd postion and delete at 7th position
    //Insertion sort starts here  10 5 2 3 6 12 
    auto start = high_resolution_clock::now();      
    for(j=1;j<A.size();++j){
        for(n=0;n<j;++n){
            if(A[j]<A[n]){
                A.insert(A.begin()+n,A[j]);
                A.erase(A.begin()+j+1);
            }
        }
    }
    auto stop = high_resolution_clock::now();
    auto timetook=duration_cast<microseconds>(stop - start);
    
    cout<<"Time took by insertion is: "<<timetook.count()<<" microseconds \n";
    //printing sorted elements
    for(n=0;n<A.size();++n){
        cout<<A[n]<<" ";
    }
}