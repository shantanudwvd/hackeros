class shantanu{

	public static void print(int[] a)
	{
		for(int i=0;i<a.length;i++)
		{
			System.out.print(a[i] + " ");
		}
		System.out.println("");
	}

	public static void main(String[] args)
	{
		int[] a = {9, 8, 6, 7, 3, 5, 4, 1, 2};
		int n = 9,i,j,x,k;
		int l=1;
		/*cout<<"enter array size";
		cin>>n;
		cout<<"enter elements";
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}*/
		for(j=0,k=1;k<=n-1;j++,k=j+1)
		{

			if(a[j]>a[k])
			{
				//System.out.println("In If:");
				//System.out.println("a[j]: " + a[j] + " a[k]: " + a[k] + " j: " + j + " k: " + k);
				x=a[j];
				a[j]=a[k];
				a[k]=x;
				//print(a);
				for(;(j)>0;j--)
				{
					//l=1;
					if(a[j]<a[j-1])
					{
						//System.out.println("In 2nd If:\n j: " + j);
						x=a[j];
						a[j]=a[j-1];
						a[j-1]=x;
						//print(a);
					}
					else 
						break;
				}
				print(a);
					
			}
			else if(a[j]<a[k])
			{
				//System.out.println("In Else:");
				//print(a);	
			}
		}
	}
}
