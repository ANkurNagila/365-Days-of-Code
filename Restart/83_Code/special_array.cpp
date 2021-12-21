class Solution {
    public :
    long long specialSum(vector<int> m, int N) {
        // write code here
        
        long long sum=m[0];
        
        for(int i=1;i<m.size()-1;i++)
        {
            if(not(m[i-1]>m[i] and m[i+1]>m[i]))
            {
                sum=sum+m[i];
            }
            else
            {
                if(i!=1 and i!=m.size()-1)
                {
                    int j=i-1;
                    int k=i+1;
                    
                    int index;
                    if(m[j]>m[k])
                        index=k;
                    else
                        index=j;
                    
                    int ele1=m[j-1],ele2=m[k+1];
                    
                    if(ele1>ele2 and ele1<m[i])
                    {
                        sum=sum+ele1+m[i]-m[index];
                        m[index]=ele1;
                    }
                    else if(ele2>ele1 and ele2<m[i])
                    {
                        sum=sum+ele2+m[i]-m[index];
                        m[index]=ele2;
                    }
                    else
                    {
                        sum=sum+2*m[i]-m[index];
                        m[index]=m[i];
                    }
                }
                else if(i==1)
                {
                    int k=i+1;
                    int ele=m[k+1];
                    
                    if(m[i-1]>m[k])
                    {
                        if(ele>=m[i])
                        {
                            sum=sum+m[i];
                            m[k]=m[i];
                        }
                        else
                        {
                            sum=sum+m[i];
                            m[k]=ele;
                        }
                    }
                    else
                    {
                        if(ele>=m[i])
                        {
                            sum=sum+m[i]+m[i-1]+;
                            m[k]=m[i;]
                        }
                        else
                        {
                            sum=sum+2*m[i]-m[i-1];
                            m[i-1]=m[i];
                        }
                    }
                    
                }
                else
                {
                    int j=i-1;
                    int ele=m[j-1];
                    
                    if(ele<=m[i])
                    {
                        sum=sum+m[i]-m[index];
                    }
                    
                    
                }
            }
        }
    }
};
