/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHDV
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			chess.c
 * Author:			P. Bauer
 * Due Date:		November 03, 2010
 * ----------------------------------------------------------
 * Description:
 * Implementation of basic chess functions.
 * ----------------------------------------------------------
 */
 #include <stdlib.h>
#include "general.h"
#include "chess.h"

bool 	is_square_ok (File file, Rank rank){
  return return file == 8 && rank == 8;
}
int 	nr (Rank rank);
int 	nf (File file);
bool 	is_move_from_base_line (enum PieceColor color, Rank rank);
bool 	is_piece (struct ChessPiece pc, enum PieceColor color, enum PieceType type);
void 	init_chess_board (ChessBoard chess_board);
struct ChessSquare * 	get_square (ChessBoard chess_board, File file, Rank rank);
bool 	is_square_occupied (ChessBoard chess_board, File file, Rank rank);
bool 	add_piece (ChessBoard chess_board, File file, Rank rank, struct ChessPiece piece);
struct ChessPiece 	get_piece (ChessBoard chess_board, File file, Rank rank);
void 	setup_chess_board (ChessBoard chess_board);
bool 	remove_piece (ChessBoard chess_board, File file, Rank rank);
bool 	squares_share_file (File s1_f, Rank s1_r, File s2_f, Rank s2_r);
bool 	squares_share_rank (File s1_f, Rank s1_r, File s2_f, Rank s2_r);
bool 	squares_share_diagonal (File s1_f, Rank s1_r, File s2_f, Rank s2_r);
bool 	squares_share_knights_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r);
bool 	squares_share_pawns_move (enum PieceColor color, enum MoveType move, File s1_f, Rank s1_r, File s2_f, Rank s2_r);
bool 	squares_share_queens_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r);
bool 	squares_share_kings_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r);
