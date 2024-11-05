pf_struct_i	ft_pf_control(char *s)
{
	pf_struct_i   pf_i;
	char	*ptr_s;

	ptr_s = s;
	if (*ptr_s)
	{
		if (ft_strchr(" -+#0", ptr_s) != 0)
		{
			*pf_i.flags = *ptr_s;
			ptr_s++;
			pf_i.flags++;
		}
		if (ft_strchr("123456789", ptr_s) != 0)
			pf_i.width = ft_atoi(ptr_s);
		if (ft_strchr(ptr_s, '.') != 0)
		{
			ptr_s++;
			pf_i.precision = ft_atoi(ptr_s);
		}
		if (ft_strchr("cspdiuxX%", ptr_s) != 0)
			pf_i.convertion = ptr_s;
	}
    return (pf_i);
}

typedef struct 
{
    char    flags;
    int        width;
    int        precision;
    char    convertion;
} pf_struct_i;

pf_struct_i    ft_pf_control(char *s)
{
    pf_struct_i pf_i = {0};
    char    *ptr_s;

    ptr_s = s;
    while (*ptr_s)
    {
        if (strchr("-+ #0", *ptr_s))
        {
            pf_i.flags = *ptr_s;
            ptr_s++;
        }
        if (strchr("123456789", *ptr_s)) {
            pf_i.width = atoi(ptr_s);
            while (isdigit(*ptr_s)) {
                ptr_s++;
            }
        }
        if (*ptr_s == '.') {
            ptr_s++;
            pf_i.precision = atoi(ptr_s);
            while (isdigit(*ptr_s)) {
                ptr_s++;
            }
        }
        if (strchr("cspdiuxX%", *ptr_s)) {
            pf_i.convertion = *ptr_s;
            break;
        }
    }
    return (pf_i);
}

int main() {
  char  *s1 = "-10d";
  char  *s2 = "+5d";
  char  *s3 = "0.5d";
  pf_struct_i pf_i1;
  pf_struct_i pf_i2;
  pf_struct_i pf_i3;
  
  pf_i1 = ft_pf_control(s1);
  pf_i2 = ft_pf_control(s2);
  pf_i3 = ft_pf_control(s3);

  return 0;
}