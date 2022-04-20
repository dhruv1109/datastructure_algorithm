void bubbleSort(vector<int>& arr, int n)
{   
	for(int i=1;i<n;i++)
	{
        // Last i elements are already in place
		for(int j=0;j<n-i;j++)
		{
			if(arr[j]>arr[j+1])
				swap(arr[j],arr[j+1]);
		}
	}
}