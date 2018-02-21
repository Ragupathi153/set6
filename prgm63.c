    #include<stdio.h>
    int main()
    {
        char ch[20];
        int i,count=0;
        scanf("%[^\n]s",&ch);
        while(ch[i]!='\0')
        //for(i=0;ch[i]!='\0';i++)
        {
            if(ch[i]==' ')
            {
                count++;
            }
            i++;
        }
        printf("%d",count+1);
     
        return 0;
    }
     
