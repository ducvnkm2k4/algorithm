#include<iostream>
#include<random>
#include<vector>

void inputArr(std::vector<int> &a){
    std::random_device rd;
    std::mt19937 gen(rd());
    for(int i=0;i<10;i++){
        std::uniform_int_distribution distributton(-100,100);
        int randomnumber=distributton(gen);
        a.push_back(randomnumber);
    }
}

void outputArr(std::vector<int> a){
    for(int i=0;i<a.size();i++){
        std::cout<<a[i]<<" ";
    }
}
void swap(int &a,int &b){
    int tg=a;
    a=b;
    b=tg;
}
void bubbleSort(std::vector<int> &a){
    for(int  i=0;i<a.size()-1;i++){
        for(int j=a.size();j>=i;j--){
            if(a[j]<a[i]) swap(a[i],a[j]);
        }
    }
}

int main(){
    std::vector<int> arr;
    inputArr(arr);
    std::cout<<"mang ban dau:\n";
    outputArr(arr);
    std::cout<<"\nsau sap xep:\n";
    bubbleSort(arr);
    outputArr(arr);
    return 0;
}