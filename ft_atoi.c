#include "push_swap.h"

int	ft_det_of(size_t res, const char *str, int i, int minus)
{
	size_t	ov_div;
	int		ov_mod;

	ov_div = 922337203685477580;
	if (minus == 1)
		ov_mod = 7;
	else
		ov_mod = 8;
	if (res > ov_div)
		return (ov_mod);
	else if (res == ov_div)
	{
		if (str[i] - '0' > ov_mod)
			return (ov_mod);
	}
	return (0);
}

int	ft_atoi(const char *str, int *is_error)
{
	int		i;
	size_t	res;
	int		minus;

	i = 0;
	res = 0;
	minus = 1;
	if (str[i] == '-')
		minus = -1;
	if (str[i] == '-')
		i++;
	while ('0' <= str[i] && str[i] <= '9')
	{
		if (ft_det_of(res, str, i, minus))
			return (ft_det_of(res, str, i, minus) - 8);
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (str[i] != '\0')
		*is_error = 1;
	return (res * minus);
}