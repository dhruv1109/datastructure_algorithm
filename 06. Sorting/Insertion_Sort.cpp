void insertionSort(int n, vector<int> &arr)
{    
	for(int i=1;i<n;i++)
	{
		int x=arr[i];
		int j=i;
		while(x<arr[j-1])
		{
			arr[j]=arr[j-1];
			j--;
		}
		arr[j]=x;	
	}
}