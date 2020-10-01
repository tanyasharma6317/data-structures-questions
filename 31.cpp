
void occ(int arr[], int n, int ele, int i, int &count)
{
    if(i==n)
    return;
    if(arr[i]==ele)
    count++;
    occ(arr,n,ele,i+1,count);
}
int main()
{
    int arr[]= {5,5,6,5,6};
    int count=0;
    occ(arr,5,5,0,count);
    cout<< count << " ";
    
}