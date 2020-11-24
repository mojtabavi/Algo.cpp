#include <iostream>
#include <time.h>
#include <bits/stdc++.h> 
using namespace std;


int linearSearch(int *arr,int arrSize,int number){

    int location = -1;
    for(int i=0; i<arrSize; i++)
    {
        if( number == arr[i] && location == -1 )
        {
            location = i;
            cout << "location founded " << location << endl;
        }
    }
}

int binarySearch(int *arr,int arrSize,int number){

    int location = -1;
    int mid;
    int low = 0;
    int high = arrSize - 1;

    while( low <= high && location == -1 )
    {
        mid = (low + high)/2;
        if( number == arr[mid] )
        {
            location = mid;
            cout << "location founded " << location << endl;
        }
        else if ( number < arr[mid] )
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }

    }

}


int main()
{
    double time_taken;
    int size,number;
    cout<< "how big do you want the array?" << endl;
    cin >> size;
    cout << "Enter the number that you are looking for??"<< endl;
    cin >> number;



    int array[size];
    
    
    for(int i=0; i<size; i++){ 
        array[i] = i; 
    }

    clock_t tlStart = clock();
    linearSearch(array,size,number);
    clock_t tlEnd = clock();


    // Calculating total time taken by the program. 
    time_taken = double(tlEnd - tlStart) / double(CLOCKS_PER_SEC); 
    cout << "Time taken by linearSearch is : " << fixed  
         << time_taken << setprecision(5); 
    cout << " sec " << endl; 



    clock_t tbStart = clock();
    binarySearch(array,size,number);
    clock_t tbEnd = clock();


        // Calculating total time taken by the program. 
    time_taken = double(tbEnd - tbStart) / double(CLOCKS_PER_SEC); 
    cout << "Time taken by binarySearch is : " << fixed  
         << time_taken << setprecision(5); 
    cout << " sec " << endl; 



    return 0;


}
