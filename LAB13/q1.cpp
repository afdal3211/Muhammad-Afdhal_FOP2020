#include <iostream>
using namespace std;

void linearsearch(int mylist[],int key, int size,int index){
	for(int i=0;i<size;i++){
		if(key==mylist[i]){
			index = i;
		}
	}
	
	if(key==mylist[index]){
		cout<<"number "<<key<<" is in index "<<index;
	}
	else
		cout<<"There is "<<key<<" in this array";
}

void binarysearch(int mylist[],int key, int size,int index,int low,int high){
	
	while(high>=low){
		
		int mid = ( high+low)/2;
		if(key<mylist[mid]){
			high = mid - 1;
		}
		else if(key==mylist[mid]){
			index=mid;
			break;
		}
		else if(key>mylist[mid])
			low = mid + 1;
	}
	
	
	if(key==mylist[index]){
		cout<<"number "<<key<<" is in index "<<index;
	}
	else
		cout<<"There is "<<key<<" in this array";
}


int main(){
	int size = 7;
	int mylist[size] = {1,4,7,2,6,3,5};
	
	//ascending
	
	for(int i=1;i<size;i++)
    {
    	int temp = 0;
        for(int j=0;j<size-i;j++)
        {
            if(mylist[j] > mylist[j+1])
            {
                temp=mylist[j];
                mylist[j]=mylist[j+1];
                mylist[j+1]=temp;
            }
        
        }
    }
	cout<<"Ascending : ";
	for(int i=0;i<size;i++){
		cout<<mylist[i]<<" ";
	}
	
	//descending
	
	for(int i=1;i<size;i++)
    {
    	int temp = 0;
        for(int j=0;j<size-i;j++)
        {
            if(mylist[j] < mylist[j+1])
            {
                temp=mylist[j];
                mylist[j]=mylist[j+1];
                mylist[j+1]=temp;
            }
        
        }
    }
    cout<<endl<<endl;
    
	cout<<"Descending : ";
	for(int i=0;i<size;i++){
		cout<<mylist[i]<<" ";
	}
	
	//linear > angka == search
	int key;
	cout<<endl<<"what number (linear from ascending ) ";
	cin>>key;
	
	int index = 0;
	
	linearsearch(mylist,key,size,index); 
	
	//==================================================
	
	//binary >> list/2 > finding where >>loop
	int low = 0;
	int high = size-1;
	cout<<endl<<"what number (binary from ascending ) ";
	cin>>key;
	
	binarysearch(mylist,key,size,index,low,high);
	
}