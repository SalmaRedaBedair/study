# insertation sort
- it take time complexity O(n^2)
```cpp
void insertationSort(int* a,int n)
{
    int k=0,ele;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(a[j]>=a[i])
            {
                k=j;
                ele=a[i];
                break;
            }
        }
        if(i)
        for(int j=i-1;j>=k;j--)
        {
            a[j+1]=a[j];
        }
        a[k]=ele;
    }
}
```
# analyzing algorithm
- in loops like for or while that statment is excuted one more than its body
- time for excuting some thing T(n)=sum of product of cost and times of every statment
## devide and conquer
- divide: divide the problem into smaller instances of the same problem
- conquer: sub problems by solving them recursively
- combine: solution of subproblems into solution of orginal problem
## merge sort
- devide array into to small arrays of the same size and so on until we reach to array containing only one element
- then we combine each of small arrays sorted and make bigger one and so on until we reach to original array sorted
- we combine by combare the first element of each samll arrays and put smallest first
- time of that algorithm = theta(nlogn)

