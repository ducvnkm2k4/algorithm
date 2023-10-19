#include<iostream>
#include<random>
#include<vector>

void inputArr(std::vector<int> &a){
    std::random_device rd;
    std::mt19937 gen(rd());
    for(int i=0;i<10;i++){
        std::uniform_int_distribution distribution(-100,100);
        int random_number=distribution(gen);
        a.push_back(random_number);
    }
}
void outputArr(std::vector<int> a){
    int arrsize=a.size();
    for(int i=0;i<arrsize;i++) std::cout<<a[i]<<" ";
}
void swap(int &x,int &y){
    int tg=x;
    x=y;
    y=tg;
}
void insertionSort(std::vector<int> &a){
    for(int i=1;i<a.size();i++){
        int key=a[i];
        int j=i-1;
        while(j>=0&&a[j]>key){
            
            j--;
        }
        a[j+1]=key;
    }
}

int main(){
    std::vector<int> arr;
    inputArr(arr);
    std::cout<<"mang ban dau:\n";
    outputArr(arr);
    insertionSort(arr);
    std::cout<<"\nsau sap xep:\n";
    outputArr(arr);
    return 0;
}