int flag=0;
        for (int j = 0; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                for (int l=k+1; l < n; l++)
                {
                    if (a[j]+a[k]+a[l]==sum)
                    {
                        flag=1;
                    }   
                }   
            }
        }
        if(flag==1){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;