//SelectionSort

#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;
                                                                                //code begins
int main() {
    // Write C++ code here
    vector <int> A;
    int i,j,temp;
    cout<<"To exit the loop enter -1 \n";
    cout << "Enter elements of array one by one with a space:";
    int n=0;

    while (1){
        cin>>n;
        if (n==-1)
            break;
        A.push_back(n);
    }

    auto start = high_resolution_clock::now();                 //We will calculate the execution time t to understand time complexity


    //Sorting algo starts here

    for(i=0;i<(A.size());++i){
        for(j=i;j<(A.size());++j){
            if(A[i]>A[j]){
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }

    }
    //ends here

    auto stop = high_resolution_clock::now();
    auto timetook=duration_cast<microseconds>(stop - start);
    cout<<"Time took by algo: "<<timetook.count()<<" microseconds \n";
    for (auto i = A.begin(); i != A.end(); ++i){
        cout << *i << " ";
    }
}
