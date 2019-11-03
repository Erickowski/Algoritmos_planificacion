/* Hecho por:
Perez Mata Erick Daniel
F-43 ISC
Sistemas operativos
M. en C.C. Alejandro Romero Herrera
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define pf printf
#define sf scanf
#define MAX 10

char NPRO[MAX][MAX];
int PRO[MAX][MAX];
int h=0,i=0,j=0,l=0,m[MAX],p=0;
int a=0,q=0;

void NREP(void);
void NREPTLI(void);

void NombresDefault(int a)
{
    for(i=0; i<a; i++)
    {
        switch(i)
        {
        case 0:
            NPRO[0][0]='W';
            NPRO[0][1]='O';
            NPRO[0][2]='R';
            NPRO[0][3]='D';
            break;
        case 1:
            NPRO[1][0]='E';
            NPRO[1][1]='X';
            NPRO[1][2]='C';
            NPRO[1][3]='E';
            NPRO[1][4]='L';
            break;
        case 2:
            NPRO[2][0]='C';
            NPRO[2][1]='H';
            NPRO[2][2]='R';
            NPRO[2][3]='O';
            NPRO[2][4]='M';
            NPRO[2][5]='E';
            break;
        case 3:
            NPRO[3][0]='P';
            NPRO[3][1]='O';
            NPRO[3][2]='I';
            NPRO[3][3]='N';
            NPRO[3][4]='T';
            break;
        case 4:
            NPRO[4][0]='F';
            NPRO[4][1]='I';
            NPRO[4][2]='R';
            NPRO[4][3]='E';
            NPRO[4][4]='F';
            NPRO[4][5]='O';
            NPRO[4][6]='X';
            break;
        case 5:
            NPRO[5][0]='C';
            NPRO[5][1]='O';
            NPRO[5][2]='D';
            NPRO[5][3]='E';
            break;
        case 6:
            NPRO[6][0]='O';
            NPRO[6][1]='P';
            NPRO[6][2]='E';
            NPRO[6][3]='R';
            NPRO[6][4]='A';
            break;
        case 7:
            NPRO[7][0]='N';
            NPRO[7][1]='V';
            NPRO[7][2]='I';
            NPRO[7][3]='D';
            NPRO[7][4]='I';
            NPRO[7][5]='A';
            break;
        case 8:
            NPRO[8][0]='E';
            NPRO[8][1]='C';
            NPRO[8][2]='L';
            NPRO[8][3]='I';
            NPRO[8][4]='P';
            NPRO[8][5]='S';
            NPRO[8][6]='E';
            break;
        default:
            break;
        }
    }
}

void ValoresDefault(int a)
{
    for(i=0; i<a; i++)
    {
        switch(i)
        {
        case 0:
            PRO[0][0]=(rand()%1000);
            PRO[0][1]=(rand()%20)+1;
            PRO[0][2]=(rand()%20)+1;
            break;
        case 1:
            PRO[1][0]=(rand()%1000);
            PRO[1][1]=(rand()%20)+1;
            PRO[1][2]=(rand()%20)+1;
            break;
        case 2:
            PRO[2][0]=(rand()%1000);
            PRO[2][1]=(rand()%20)+1;
            PRO[2][2]=(rand()%20)+1;
            break;
        case 3:
            PRO[3][0]=(rand()%1000);
            PRO[3][1]=(rand()%20)+1;
            PRO[3][2]=(rand()%20)+1;
            break;
        case 4:
            PRO[4][0]=(rand()%1000);
            PRO[4][1]=(rand()%20)+1;
            PRO[4][2]=(rand()%20)+1;
            break;
        case 5:
            PRO[5][0]=(rand()%1000);
            PRO[5][1]=(rand()%20)+1;
            PRO[5][2]=(rand()%20)+1;
            break;
        case 6:
            PRO[6][0]=(rand()%1000);
            PRO[6][1]=(rand()%20)+1;
            PRO[6][2]=(rand()%20)+1;
            break;
        case 7:
            PRO[7][0]=(rand()%1000);
            PRO[7][1]=(rand()%20)+1;
            PRO[7][2]=(rand()%20)+1;
            break;
        case 8:
            PRO[8][0]=(rand()%1000);
            PRO[8][1]=(rand()%20)+1;
            PRO[8][2]=(rand()%20)+1;
            break;
        default:
            break;
        }
    }
}

void NREP(void)
{
    h=0;
    for(i=0; i<j+1; i++)
    {
        if(PRO[i][0]==PRO[i+1][0])
        {
            PRO[i+1][0]=(rand()%1000);
            h++;
        }
    }
    if(h>=1)
    {
        NREP();
    }
}

int comprueba(int id)
{
    int k=0;
    while(1)
    {
        if(k<10)
        {
            if(PRO[k][0]==id)
            {
                break;
            }
            else k++;
        }
        else
        {
            return 1;
            break;
        }
    }
}

void elimina (int id)
{
    int k=0;
    while(1)
    {
        if(PRO[k][0]==id) break;
        else k++;
    }
    for(i=0; i<j-k; i++)
    {
        PRO[k+i][0]=PRO[k+i+1][0];
        PRO[k+i][1]=PRO[k+i+1][1];
        PRO[k+i][2]=PRO[k+i+1][2];
    }
    for(i=0; i<j-k; i++)
    {
        for(l=0; l<MAX; l++)
        {
            NPRO[k+i][l]=NPRO[k+i+1][l];
        }
    }
    j--;
}

void imprimePro(void)
{
    pf(" Id_Proceso   N O M B R E   T L I   C P U\n");
    for(i=0; i<j; i++)
    {
        pf("    %i\t\t",PRO[i][0]);
        for(h=0; h<7; h++)
        {
            pf("%c",NPRO[i][h]);
        }
        pf("\t      %i       %i\n",PRO[i][1],PRO[i][2]);
    }
}

void imprimePromFCFS(void)
{
    int b=0,c=0,d=0,e=0,f=0,k=0,n[j],r=0;
    float w=0,x=0,y=0,z=0,g=j;
    pf(" Id_Proceso   N O M B R E   T L I   C P U  T R   T E j  T E s   T F\n");
    for(i=0; i<j; i++)
    {
        for(p=0; p<j; p++)
        {
            if(m[p]==PRO[i][1])
            {
                pf("    %i\t\t",PRO[p][0]);
                for(h=0; h<7; h++)
                {
                    pf("%c",NPRO[p][h]);
                }
                b+=PRO[p][2];
                n[r++]=b;
                c=b-m[f];
                k=b-e;
                pf("\t      %i",m[f]);
                if(m[f]>=10) pf("     %i",PRO[p][2]);
                else pf("      %i",PRO[p][2]);
                if(PRO[p][2]>=10) pf("     %i",b);
                else pf("      %i",b);
                if(b>=10) pf("     %i",e);
                else pf("      %i",e);
                if(e>=10) pf("     %i",k);
                else pf("      %i",k);
                if(k>=10) pf("     %i\n",c);
                else pf("      %i\n",c);
                f++;
                e+=PRO[p][2];
                w+=b;
                x+=e;
                y+=k;
                z+=c;
            }
        }
    }
    x=x-b;
    pf("\t\t\t   PROMEDIOS: \t  %.2f   %.2f  %.2f  %.2f\n",w/g,x/g,y/g,z/g);

    pf("\n\t\tDIAGRAMA GANTT\n\n");
    pf("|");
    for(i=0; i<j; i++)
    {
        for(p=0; p<j; p++)
        {
            if(m[p]==PRO[i][1])

            {
                for(h=0; h<7; h++)
                {
                    pf("%c",NPRO[p][h]);
                }
                pf("|");
            }
        }
    }
    pf("\n0");
    for(i=0; i<j; i++)
    {
        pf("\t%i",n[i]);
    }
    pf("\n");
}

void imprimePromPrio(void)
{
    int b=0,c=0,d=0,e=0,f=0,k=0,n[j],r=0;
    float w=0,x=0,y=0,z=0,g=j;
    pf(" Id_Proceso   N O M B R E  PRIORIDAD  C P U   T R   T E j   T E s    T F\n");
    for(i=0; i<j; i++)
    {
        for(p=0; p<j; p++)
        {
            if(m[p]==PRO[i][1])
            {
                pf("    %i\t\t",PRO[p][0]);
                for(h=0; h<7; h++)
                {
                    pf("%c",NPRO[p][h]);
                }
                b+=PRO[p][2];
                n[r++]=b;
                pf("\t       %i",m[f]);
                if(m[f]>=10) pf("       %i",PRO[p][2]);
                else pf("        %i",PRO[p][2]);
                if(PRO[p][2]>=10) pf("     %i",b);
                else pf("      %i",b);
                if(b>=10) pf("     %i",e);
                else pf("       %i",e);
                if(e>=10) pf("     %i",e);
                else pf("       %i",e);
                if(e>=10) pf("       %i\n",b);
                else pf("       %i\n",b);
                f++;
                e+=PRO[p][2];
                w+=b;
                x+=e;
                y+=e;
                z+=b;
            }
        }
    }
    x=x-b;
    y=y-b;
    pf("\t\t\t\t   PROMEDIOS: %.2f  %.2f  %.2f   %.2f\n",w/g,x/g,y/g,z/g);

    pf("\n\t\tDIAGRAMA GANTT\n\n");
    pf("|");
    for(i=0; i<j; i++)
    {
        for(p=0; p<j; p++)
        {
            if(m[p]==PRO[i][1])

            {
                for(h=0; h<7; h++)
                {
                    pf("%c",NPRO[p][h]);
                }
                pf("|");
            }
        }
    }
    pf("\n0");
    for(i=0; i<j; i++)
    {
        pf("\t%i",n[i]);
    }
    pf("\n");
}

void imprimePromSJB(void)
{
    int b=0,c=0,d=0,e=0,f=0,k=0,n[j],r=0,s=0,num,num1;
    float w=0,x=0,y=0,z=0,g=j;
    num=m[j-1];
    num1=m[0];
    m[0]=num;
    m[j-1]=num1;
    pf(" Id_Proceso   N O M B R E   T L I  C P U  T R  T E j  T E s  T F\n");
    for(i=0; i<j; i++)
    {
        for(p=0; p<j; p++)
        {
            if(m[p]==PRO[i][2])
            {
                pf("    %i\t\t",PRO[p][0]);
                for(h=0; h<7; h++)
                {
                    pf("%c",NPRO[p][h]);
                }
                b+=m[f];
                n[r++]=b;
                c=b-(PRO[p][1]*s);
                k=e-(PRO[p][1]*s);
                pf("\t      %i",PRO[p][1]*s);
                if((PRO[p][1]*s)>=10) pf("    %i",m[f]);
                else pf("     %i",m[f]);
                if(m[f]>=10) pf("    %i",b);
                else pf("     %i",b);
                if(b>=10) pf("     %i",e);
                else pf("     %i",e);
                if(e>=10) pf("     %i",k);
                else pf("      %i",k);
                if(k>=10) pf("   %i\n",c);
                else pf("    %i\n",c);
                if(s==0) s++;
                e+=m[f];
                f++;
                w+=b;
                x+=e;
                y+=k;
                z+=c;
            }
        }
    }
    x=x-b;
    pf("\t\t\t   PROMEDIOS:   %.2f  %.2f  %.2f %.2f\n",w/g,x/g,y/g,z/g);

    pf("Diagrama de Gantt\n");
    pf("|");
    for(i=0; i<j; i++)
    {
        for(p=0; p<j; p++)
        {
            if(m[p]==PRO[i][2])
            {
                for(h=0; h<7; h++)
                {
                    pf("%c",NPRO[p][h]);
                }
                pf("|");
            }
        }
    }
    pf("\n0");
    for(i=0; i<j; i++)
    {
        pf("\t%i",n[i]);
    }
    pf("\n");
}

void CalcularFCFS_PRIO(void)
{
    l=0;
    for(i=0; i<j; i++)
    {
        m[i]=21;
    }
    for(h=0; h<j+1; h++)
    {
        switch(h)
        {
        case 0:
            for(i=0; i<j; i++)
            {
                if(PRO[i][1]<m[0]) m[0]=PRO[i][1];
            }
            break;
        case 1:
            for(i=0; i<j; i++)
            {
                if(PRO[i][1]<m[1]&&PRO[i][1]!=m[0]) m[1]=PRO[i][1];
            }
            break;
        case 2:
            for(i=0; i<j; i++)
            {
                if(PRO[i][1]<m[2]&&PRO[i][1]!=m[1]&&PRO[i][1]!=m[0]) m[2]=PRO[i][1];
            }
            break;
        case 3:
            for(i=0; i<j; i++)
            {
                if(PRO[i][1]<m[3]&&PRO[i][1]!=m[2]&&PRO[i][1]!=m[1]&&PRO[i][1]!=m[0]) m[3]=PRO[i][1];
            }
            break;
        case 4:
            for(i=0; i<j; i++)
            {
                if(PRO[i][1]<m[4]&&PRO[i][1]!=m[3]&&PRO[i][1]!=m[2]&&PRO[i][1]!=m[1]&&PRO[i][1]!=m[0]) m[4]=PRO[i][1];
            }
            break;
        case 5:
            for(i=0; i<j; i++)
            {
                if(PRO[i][1]<m[5]&&PRO[i][1]!=m[4]&&PRO[i][1]!=m[3]&&PRO[i][1]!=m[2]&&PRO[i][1]!=m[1]&&PRO[i][1]!=m[0]) m[5]=PRO[i][1];
            }
            break;
        case 6:
            for(i=0; i<j; i++)
            {
                if(PRO[i][1]<m[6]&&PRO[i][1]!=m[5]&&PRO[i][1]!=m[4]&&PRO[i][1]!=m[3]&&PRO[i][1]!=m[2]&&PRO[i][1]!=m[1]&&PRO[i][1]!=m[0]) m[6]=PRO[i][1];
            }
            break;
        case 7:
            for(i=0; i<j; i++)
            {
                if(PRO[i][1]<m[7]&&PRO[i][1]!=m[6]&&PRO[i][1]!=m[5]&&PRO[i][1]!=m[4]&&PRO[i][1]!=m[3]&&PRO[i][1]!=m[2]&&PRO[i][1]!=m[1]&&PRO[i][1]!=m[0]) m[7]=PRO[i][1];
            }
            break;
        case 8:
            for(i=0; i<j; i++)
            {
                if(PRO[i][1]<m[8]&&PRO[i][1]!=m[7]&&PRO[i][1]!=m[6]&&PRO[i][1]!=m[5]&&PRO[i][1]!=m[4]&&PRO[i][1]!=m[3]&&PRO[i][1]!=m[2]&&PRO[i][1]!=m[1]&&PRO[i][1]!=m[0]) m[8]=PRO[i][1];
            }
            break;
        case 9:
            for(i=0; i<j; i++)
            {
                if(PRO[i][1]<m[9]&&PRO[i][1]!=m[8]&&PRO[i][1]!=m[7]&&PRO[i][1]!=m[6]&&PRO[i][1]!=m[5]&&PRO[i][1]!=m[4]&&PRO[i][1]!=m[3]&&PRO[i][1]!=m[2]&&PRO[i][1]!=m[1]&&PRO[i][1]!=m[0]) m[9]=PRO[i][1];
            }
            break;
        }
    }
}

void CalcularSJF(void)
{
    l=0;
    for(i=0; i<j; i++)
    {
        m[i]=21;
    }
    for(h=0; h<j+1; h++)
    {
        switch(h)
        {
        case 0:
            for(i=0; i<j; i++)
            {
                if(PRO[i][2]<m[0]) m[0]=PRO[i][2];
            }
            break;
        case 1:
            for(i=0; i<j; i++)
            {
                if(PRO[i][2]<m[1]&&PRO[i][2]!=m[0]) m[1]=PRO[i][2];
            }
            break;
        case 2:
            for(i=0; i<j; i++)
            {
                if(PRO[i][2]<m[2]&&PRO[i][2]!=m[1]&&PRO[i][2]!=m[0]) m[2]=PRO[i][2];
            }
            break;
        case 3:
            for(i=0; i<j; i++)
            {
                if(PRO[i][2]<m[3]&&PRO[i][2]!=m[2]&&PRO[i][2]!=m[1]&&PRO[i][2]!=m[0]) m[3]=PRO[i][2];
            }
            break;
        case 4:
            for(i=0; i<j; i++)
            {
                if(PRO[i][2]<m[4]&&PRO[i][2]!=m[3]&&PRO[i][2]!=m[2]&&PRO[i][2]!=m[1]&&PRO[i][2]!=m[0]) m[4]=PRO[i][2];
            }
            break;
        case 5:
            for(i=0; i<j; i++)
            {
                if(PRO[i][2]<m[5]&&PRO[i][2]!=m[4]&&PRO[i][2]!=m[3]&&PRO[i][2]!=m[2]&&PRO[i][2]!=m[1]&&PRO[i][2]!=m[0]) m[5]=PRO[i][2];
            }
            break;
        case 6:
            for(i=0; i<j; i++)
            {
                if(PRO[i][2]<m[6]&&PRO[i][2]!=m[5]&&PRO[i][2]!=m[4]&&PRO[i][2]!=m[3]&&PRO[i][2]!=m[2]&&PRO[i][2]!=m[1]&&PRO[i][2]!=m[0]) m[6]=PRO[i][2];
            }
            break;
        case 7:
            for(i=0; i<j; i++)
            {
                if(PRO[i][2]<m[7]&&PRO[i][2]!=m[6]&&PRO[i][2]!=m[5]&&PRO[i][2]!=m[4]&&PRO[i][2]!=m[3]&&PRO[i][2]!=m[2]&&PRO[i][2]!=m[1]&&PRO[i][2]!=m[0]) m[7]=PRO[i][2];
            }
            break;
        case 8:
            for(i=0; i<j; i++)
            {
                if(PRO[i][2]<m[8]&&PRO[i][2]!=m[7]&&PRO[i][2]!=m[6]&&PRO[i][2]!=m[5]&&PRO[i][2]!=m[4]&&PRO[i][2]!=m[3]&&PRO[i][2]!=m[2]&&PRO[i][2]!=m[1]&&PRO[i][2]!=m[0]) m[8]=PRO[i][2];
            }
            break;
        case 9:
            for(i=0; i<j; i++)
            {
                if(PRO[i][2]<m[9]&&PRO[i][2]!=m[8]&&PRO[i][2]!=m[7]&&PRO[i][2]!=m[6]&&PRO[i][2]!=m[5]&&PRO[i][2]!=m[4]&&PRO[i][2]!=m[3]&&PRO[i][2]!=m[2]&&PRO[i][2]!=m[1]&&PRO[i][2]!=m[0]) m[9]=PRO[i][2];
            }
            break;
        }
    }
}

void NREPTLI(void)
{
    int r,s,num, dupl;
    for (r = 0; r < j; r++)
    {
        num =(rand()%20)+1;
        dupl = 0;
        for (s = 0; s <= r; s++)
        {
            if (num == PRO[s][1])
            {
                dupl = 1;
                break;
            }
        }
        if (dupl == 1)
            r--;
        else
            PRO[r][1] = num;
    }
}

void NREPCPU(void)
{
    int r,s,num, dupl;
    for (r = 0; r < j; r++)
    {
        num =(rand()%20)+1;
        dupl = 0;
        for (s = 0; s <= r; s++)
        {
            if (num == PRO[s][2])
            {
                dupl = 1;
                break;
            }
        }
        if (dupl == 1)
            r--;
        else
            PRO[r][2] = num;
    }
}

void imprimePromRoundRobin(void)
{
    int n[MAX],nn[MAX],w[MAX],ww[MAX],s[MAX],ss[MAX],t=0,u=1,v=0;
    int k=0,d=0,dd=0;
    int b=0,c=0,f=0,e=0;
    float r=0,x=0,y=0,z=0,g=j;
    pf("Quantum: ");
    sf("%i",&q);
    for(i=0; i<j; i++)
    {
        w[i]=PRO[i][2];
    }
    for(i=0; i<j; i++)
    {
        r+=PRO[i][2];
    }
    for(i=0; i<100; i++)
    {
        for(k=0; k<j; k++)
        {
            if(w[k]<=q&&w[k]>0)
            {
                t+=w[k];
                n[k]=t;
                if(t>=r) break;
            }
            else
            {
                if(w[k]!=0&&w[k]>0)
                {
                    t+=q;
                    if(t>=r) break;
                }
            }
        }
        for(v=0; v<j; v++)
        {
            w[v]=w[v]-q;
        }
        if(t>=r) break;
    }
    pf(" Id_Proceso   N O M B R E   T L I   C P U  T R    T F    T E s\n");
    for(i=0; i<j; i++)
    {
        for(p=0; p<j; p++)
        {
            if(m[p]==PRO[i][1])
            {
                s[f]=p;
                pf("    %i\t\t",PRO[p][0]);
                for(h=0; h<7; h++)
                {
                    pf("%c",NPRO[p][h]);
                }
                b=n[i]-m[f];
                e=b-PRO[i][2];
                pf("\t      %i",m[f]);
                if(m[f]>=10) pf("     %i",PRO[i][2]);
                else pf("      %i",PRO[i][2]);
                if(PRO[i][2]>=10) pf("    %i",n[i]);
                else pf("     %i",n[i]);
                if(b>=10) pf("     %i",b);
                else pf("      %i",b);
                if(e>=10) pf("      %i\n",e);
                else pf("       %i\n",e);
                f++;
                z+=n[i];
                x+=b;
                y+=e;
            }
        }
    }
    pf("\t\t\t   PROMEDIOS: \t  %.2f   %.2f  %.2f  \n",z/g,x/g,y/g);
    for(i=0; i<j; i++)
    {
        w[i]=PRO[i][2];
        ww[i]=PRO[i][2];
    }
    for(i=0; i<j; i++)
    {
        ss[i]=0;
    }
    pf("\n\n\t\tDIAGRAMA DE GANTT\n");
    for(i=0; i<j; i++)
    {
        f=0;
        for(h=0; h<7; h++)
        {
            pf("%c",NPRO[s[i]][h]);
        }
        pf("-");
        for(k=0; k<j; k++)
        {
            for(h=0; h<ss[k]; h++) pf(" ");
        }

        for(k=i; k<j; k++)
        {
            if(w[i]<=q&&w[i]>0)
            {
                for(h=0; h<w[i]; h++)
                {
                    pf("|");
                    if(f==0)
                    {
                        ss[i]++;
                    }
                    if(f==1) dd++;
                }
                f++;
                w[i]=(w[i]-q);
            }
            else
            {
                if(w[i]>q)
                {
                    for(h=0; h<q; h++)
                    {
                        pf("|");
                        if(f==0)
                        {
                            ss[i]++;
                        }
                        if(f==1) dd++;
                    }
                    f++;
                    w[i]=(w[i]-q);
                }
            }
            if(f>=1)
            {
                for(l=0; l<dd; l++)
                {
                    pf(" ");
                }
            }
            if(w[i]<=0) pf("");
            else
            {
                ///A partir de aqui esta el error con los espacios
                for(d=0; d<1; d++)
                {
                    for(h=i+1; h<j; h++)
                    {
                        if(w[h]>=q)
                        {
                            for(l=0; l<q; l++)
                            {
                                pf(" ");
                            }
                            w[h]=w[h]-q;
                        }
                        else
                        {
                            if(w[h]<q&&w[h]>0)
                            {
                                for(l=0; l<w[h]; l++)
                                {
                                    pf(" ");
                                }
                                w[h]=w[h]-q;
                            }
                            else
                            {
                                if(w[h]<=0) pf("");
                            }
                        }
                    }
                }
            }
        }
        for(h=0; h<j; h++)
        {
            w[h]=PRO[h][2];
        }
        pf("\n");
    }
}

int main (void)
{
    int opc, opd;
    int p=0,id=0;
    char nombre[MAX];
    srand(time(NULL));
    a=(rand()%5)+5;
    j=a;
    NombresDefault(a);
    ValoresDefault(a);
    NREP();
    NREPTLI();
    NREPCPU();
    for(i=0; i<j; i++) m[i]=21;
    do
    {
        pf("Planificador de procesos\n\n");
        pf("1.- Calcular mediante algoritmos\n");
        pf("2.- Lista de procesos\n");
        pf("3.- A%cadir proceso\n",164);
        pf("4.- Eliminar proceso\n");
        pf("5.- Salir\n");
        sf("%i",&opc);
        switch(opc)
        {
        case 1:
            system("cls");
            pf("Seleccione un algoritmo\n");
            pf("1.- First Come First Served\n");
            pf("2.- Prioridad\n");
            pf("3.- Short Job First\n");
            pf("4.- Round Robin\n");
            sf("%i",&opd);
            switch(opd)
            {
            case 1:
                CalcularFCFS_PRIO();
                pf("\n");
                imprimePromFCFS();
                system("pause");
                system("cls");
                exit(0);
                break;
            case 2:
                CalcularFCFS_PRIO();
                pf("\n");
                imprimePromPrio();
                system("pause");
                system("cls");
                exit(0);
                break;
            case 3:
                CalcularSJF();
                pf("\n");
                imprimePromSJB();
                system("pause");
                system("cls");
                exit(0);
                break;
            case 4:
                CalcularFCFS_PRIO();
                imprimePromRoundRobin();
                system("pause");
                exit(0);
                break;
            default:
                pf("Comando no valido\n");
                system("pause");
                system("cls");
                break;
            }
            break;
        case 2:
            system("cls");
            imprimePro();
            pf("\n");
            system("pause");
            system("cls");
            break;
        case 3:
            if(j==10)
            {
                pf("Maximo de procesos alcanzados\n");
                system("pause");
                system("cls");
            }
            else
            {
                PRO[j][0]=(rand()%1000)+1;
                pf("Nombre del proceso: ");
                sf("%s",&nombre);
                for(i=0; i<(unsigned)strlen(nombre); i++)
                {
                    NPRO[j][i]=nombre[i];
                }
                pf("TLI: ");
                sf("%i",&PRO[j][1]);
                pf("CPU: ");
                sf("%i",&PRO[j][2]);
                j++;
                NREPTLI();
                NREPCPU();
                system("cls");
            }
            break;
        case 4:
            pf("ID del proceso a eliminar: ");
            sf("%i",&id);
            if(comprueba(id)!=1)
            {
                elimina(id);
                pf("Operacion exitosa\n");
                system("pause");
                system("cls");
            }
            system("cls");
            break;
        case 5:
            system("cls");
            break;
        default:
            pf("Comando no valido\n");
            system("pause");
            system("cls");
            break;
        }
        if(opc==5) break;
    }
    while(opc>1||opc<5);
    return 0;
}
