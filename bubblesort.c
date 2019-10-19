void main()
{
  int[] a=new int[5];
  int[] b=new int[5];
  int[] c=new int[5];
  a[]={1,5,9,3,2};
  b[]={11,10,2,4,9};
  c[]={1,5,23,1,2};
  for(int i=0;i<10;i++)
  {
    c[i]=a[i]+b[i];
  }
  bubblesort(c);
}

void bubblesort(int d[])
{
for(int j=0;j<10<j++)
 {
 for(int k=0;k<10;k++)
  {
   if(d[k]<d[k+1])
   {
     int temp=d[k];
     d[k]=d[k+1];
     d[k+1]=temp;
   }
  }
 }
}
