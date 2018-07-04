#include <stdio.h>
#define MAXLINE 10000

int agetline(char s[], int lim);
void check(char to[]); 

int main()
{ 
  int len;
  char line[MAXLINE];

  agetline(line, MAXLINE);
  check(line);
  return 0;
}

int agetline(char s[], int lim)
{ 
  int c, i;
  for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void check(char to[])
{
  int i;
  int np, nb, nbr, nq, ns, nd; 
  /*  ()  []  {}   ``  ''  "" */
  np = nb = nbr = nq = ns = nd = 0;
  char from[MAXLINE];
  for(i = 0; to[i] != '\0'; ++i) {
    if (to[i] == '(') ++np;
    if (to[i] == '[') ++nb;
    if (to[i] == '{') ++nbr;
    if (to[i] == ')') --np;
    if (to[i] == ']') --nb;
    if (to[i] == '}') --nbr;
    if (to[i] == '`') if(nq == 1) --nq; else ++nq;
    if (to[i] == 39) if(ns == 1) --ns; else ++ns;
    if (to[i] == '"') if(nd == 1) --nd; else ++nd;
  }
  printf("if anything here equals zero, it is balanced\n");
  printf("parathensis: %d brackets: %d braces: %d\n", np, nb, nbr);
  printf("quotes: %d single: %d double: %d\n", nq, ns, nd);
}
