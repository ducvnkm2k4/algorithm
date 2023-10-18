#include<iostream>
#include<random>
#include<vector>
void inputArr(std::vector<int> &arr){
    std::random_device rd;
    std::mt19937 gen(rd());
    int min=-1000;
    int max=1000;
    int n;
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::uniform_int_distribution<int> distribution(min,max);
        int randomnumber=distribution(gen);
        arr.push_back(randomnumber);
    }
}
void outputarr(std::vector<int> arr){
    int arrsize=arr.size();
    for(int i=0;i<arrsize;i++) std::cout<<arr[i]<<" ";
}
void swap(int &x,int &y){
    int tg=x;
    x=y;
    y=tg;
}
void selectionsort(std::vector<int> &arr){
    int arrsize=arr.size();
    for(int i=0;i<arrsize;i++){
        int min=arr[i];
        int vtmin=i;
        for(int j=i+1;j<arrsize;j++)
            if(arr[j]<min){
                min=arr[j];
                vtmin=j;
            }
        swap(arr[i],arr[vtmin]);
    }
}
int main(){
    std::vector<int> arr;
    inputArr(arr);
    std::cout<<"mang ban dau:\n";
    outputarr(arr);
    selectionsort(arr);
    std::cout<<"\nsau sap xep:\n";
    outputarr(arr);
    return 0;
}
