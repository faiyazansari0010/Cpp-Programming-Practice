#include<iostream>
using namespace std;
template <class  T>
class sorting
{	int n;
	T arr[50];

public:
	void getdata();
	void selection_sort();
	void display();
};
template <class  T>
void sorting<T>::getdata()
{		
		cout<<"\nEnter size:\t";
        cin>>n;
        cout<<"\nEnter elements:\n";
        for(int i=0;i<n;i++)
        {
                cin>>arr[i];
        }     
}
template <class  T>
void sorting<T>::selection_sort()
{
int i,j,loc;
float min,temp;
       for(i=0;i<n;i++)
       {
		min=arr[i];
		loc=i;	
       		for(j=i+1;j<n;j++)
        	{
            		if(min>arr[j])
            		{ min=arr[j];
	      	 	  loc=j; }
		}
       		temp=arr[i];
        	arr[i]=arr[loc];
        	arr[loc]=temp;
        }
}
template <class  T>
void sorting<T>::display()
{
cout<<"\nSorted list  is:\n";
        for(int i=0;i<n;i++)
        {     cout<<"\nELement "<<i+1<<":\t"<<arr[i];
	      cout<<"\n";
        }
}
int main()
{
	sorting<int> obj;
	obj.getdata();
	obj.selection_sort();
    obj.display();
    sorting<float> obj1;
	obj1.getdata();
	obj1.selection_sort();
    obj1.display();
    return 0;
}
