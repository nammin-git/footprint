#include <stdio.h>

//3개 학급의 평균 성적 구하기
#define CLASSES 3
#define STUDENTS 5

void main(void)
{
	int s[CLASSES][STUDENTS] = {
		{0,1,2,3,4},
		{10,11,12,13,14},
		{20,21,22,23,24}
	};

	int clas, student, total, subtotal;
	total = 0;

	for(clas=0; clas<CLASSES; clas++){
		subtotal = 0;
		for (student = 0; student < STUDENTS; student++) {
			subtotal += s[clas][student];
		}
		total += subtotal;
		printf("%d학급의 평균 점수는 %d점입니다.\n", clas, subtotal / student);
	}

	printf("----------------\n");
	printf("전체 평균 점수는 %d점입니다.\n", total / (CLASSES * STUDENTS));
}


//행렬의 덧셈
#define ROWS 3
#define COLS 3
void main()
{
	int A[ROWS][COLS] = {
		{2,3,0},
		{8,9,1},
		{7,0,5}
	};

	int B[ROWS][COLS] = {
		{1,0,0},
		{1,0,0},
		{1,0,0}
	};

	printf("행렬 A\n");
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}

	printf("------------\n");
	printf("행렬 B\n");
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}

	int C[ROWS][COLS] = { 0 };

	int r, c;

	for (r = 0; r < ROWS; r++) {
		for (c = 0; c < COLS; c++) {
			C[r][c] = A[r][c] + B[r][c];
		}
	}

	printf("------------\n");
	printf("A+B = \n");
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}

}


//tic-tac-toc 게임
#define WIDTH 3
#define HEIGHT 3

void init_board(char board[][HEIGHT]);
void disp_board(char board[][HEIGHT]);
void player_move(char board[][HEIGHT]);

void main()
{
	//X와 O를 놓을 보드 배열 초기화
	char board[WIDTH][HEIGHT];

	init_board(board);

	//게임 시작 
	printf("경기를 시작합니다.\n");

	player_move(board);


}

//보드 세팅
void init_board(char board[][HEIGHT]) {
	int x, y;

	for (x = 0; x < WIDTH; x++) {
		for (y = 0; y < HEIGHT; y++) {
			board[x][y] = ' ';
		}
	}

}

//보드 보여주기
void disp_board(char board[][HEIGHT]) {
	for (int i = 0; i < WIDTH; i++) {
		printf("---|---|---\n");
		printf(" %c | %c | %c\n", board[i][0], board[i][1], board[i][2]);
	}
	printf("---|---|---\n");
}

//게임 시작
void player_move(char board[][HEIGHT]) {

	int x, y;
	char blank;

	int turn = 0;

	while (1) {

		printf("(x, y) 좌표(종료 -1 -1): ");
		scanf_s("%d", &x);
		scanf_s("%c", &blank, 1);
		scanf_s("%d", &y);

		if (turn % 2 == 0) {
			if (board[x][y] == ' ') {
				board[x][y] = 'X';
				turn++;
				disp_board(board);
			}
			else {
				printf("잘못된 위치입니다.\n");
				continue;
			}
		}
		else {
			if (board[x][y] == ' ') {
				board[x][y] = 'O';
				turn++;
				disp_board(board);
			}
			else {
				printf("잘못된 위치입니다.\n");
				continue;
			}
		}

	}
}


//배열 간 비교
#define SIZE 10
void main()
{
	int a[SIZE] = { 0 };
	int b[SIZE] = { 0 };

	for (int i = 0; i < SIZE; i++) {
		if (a[i] == b[i])
			printf("같음\n");
		else
			printf("다름\n");
	}

}
