//Smallest element laake usko uski sahi jagah place krna
//in place
//not stable

void selectionSort(vector<int>& arr, int n)
{   
	for(int i=0;i<n;i++)
	{
		int idx=i;
		for(int j=i+1;j<n;j++)
			if(arr[j]<arr[idx])
				idx=j;
		
		swap(arr[i],arr[idx]);
	}
}