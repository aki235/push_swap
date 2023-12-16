#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>

typedef struct s_dlst{
	long			value;
	struct s_dlst	*next;
	struct s_dlst	*prev;
} t_dlst;

//入力
int	ft_detect_head(char c);
int	ft_det_of(size_t res, const char *str, int i, int minus);
int	ft_atoi(const char *str, int *is_error);


//循環リストの操作
t_dlst	*createNode(long value);
t_dlst	*createSentinel();
void	appendNode(t_dlst *sentinel, t_dlst *newNode);

//コマンド
void	sa(t_dlst *sentinel);
void	pb(t_dlst *a, t_dlst *b);
void	ra(t_dlst *a);
void	rra(t_dlst *a);

//エラー処理
void ft_error(void);

#endif