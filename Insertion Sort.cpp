#include<iostream>
using namespace std;
                                
class shortt{
      public:      
            int i,c=0;
	    	void array(int x,int a[]){
	    		
	        	cout<<"Enter the elements: ";
	        	for(i=0;i<x;i++)
	        		cin>>a[i];
	        	}    
	    	void sort(int x,int a[]){
	            int temp,k;
	            for(int i=1;i<=x-1;i++){
	                for(int j=0;j<=i;j++){
	                    if(a[j]>a[i]){
	                        temp=a[j];
	                        a[j]=a[i];
	                        for(k=i;k>j;k--){
	                            c++;
	                            a[k]=a[k-1];
	                        }
	                        a[k+1]=temp;                 
	                    }
	                }
	            }
	        }
	        
	    	void display(int x,int a[]){
	        	for(int i=0;i<x;i++)
	        		cout<<a[i]<<"\t";
	        	cout<<endl;
	    		cout<<"\n Num Of comparisons are : "<<c<<endl;
			}  
       
             
};
      
int main(){
	int y=0;
	cout<<"How many elemets you want in the array : ";
	cin>>y;
	int ar[y];
    shortt s1;
    s1.array(y,ar);
    s1.sort(y,ar);
    cout<<"Array after sorting\n ";
    s1.display(y,ar);
}
