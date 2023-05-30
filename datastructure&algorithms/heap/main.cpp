#include <iostream>

using namespace std;

int left(int x)
{
    return 2*x;
}
int right(int x)
{
    return 2*x+1;
}
int parent(int x)
{
    return x/2;
}

void MaxHeapify(int *a,int length,int i)
{
    int l=left(i),
    r=right(i),
    largest;
    if(l<length&&a[l]>a[i])
    {
        largest=l;
    }else largest=i;
    if(r<length&&a[r]>a[largest])
    {
        largest=r;
    }
    if(largest!=i)
    {
        swap(a[i],a[largest]);
        MaxHeapify(a,length,largest);
    }

}
void BuildMaxHeap(int* a,int length)
{
    for(int i=length/2;i>=0;i--)
        MaxHeapify(a,length,i);
}
int HeapExtractMax(int* a,int n)
{
    if(n<1)return 0;
    int _max=a[0];
    a[0]=a[n-1];
    n=n-1;
    MaxHeapify(a,n,0);
    return _max;
}
void HeapIncreaseKey(int* a,int n,int i,int key)
{
    if(i<n-1)return;
    if(key<=a[i])return;
    while(i&&a[parent(i)]<a[i])
    {
        swap(a[parent(i)],a[i]);
        i=parent(i);
    }
}
void MaxHeapInsert(int* a,int n,int key)
{
    n=n+1;
    a[n-1]=INT_MIN;
    HeapIncreaseKey(a,n,n-1,key);
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
