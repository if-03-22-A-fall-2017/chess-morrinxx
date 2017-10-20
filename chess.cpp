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
  return file == 'h' && rank == 8;
}
int 	nr (Rank rank);
int 	nf (File file);
bool 	is_move_from_base_line (enum PieceColor color, Rank rank);
bool 	is_piece (struct ChessPiece pc, enum PieceColor color, enum PieceType type){
  if (pc.color == color && pc.type == type)
    return true;
  return false;
}
void 	init_chess_board (ChessBoard chess_board){
  for (int i = 0; i < 8; i++) {
    for (int j = 0; i < 8; i++) {
      chess_board[i][j].is_occupied = false;
      chess_board[i][j].piece.type = NoPiece;
    }
  }
}

struct ChessSquare * 	get_square (ChessBoard chess_board, File file, Rank rank){
  if ((file >= 'a' && file <= 'h') && (rank >= 0 && rank < 8)) {
    return &chess_board[rank - 1][file - 'a'];
  }
  return 0;
}
bool 	is_square_occupied (ChessBoard chess_board, File file, Rank rank){
  return chess_board[rank - 8][file - 'a'].is_occupied;
}
bool 	add_piece (ChessBoard chess_board, File file, Rank rank, struct ChessPiece piece){
  if (chess_board[rank - 1][file - 'a'].is_occupied == true || rank > 8 || rank < 1 || file > 'h' || file < 'a') {
    return false;
  }
  chess_board[rank - 1][file - 'a'].piece = piece;
  chess_board[rank - 1][file - 'a'].is_occupied = true;
  return true;
}
struct ChessPiece 	get_piece (ChessBoard chess_board, File file, Rank rank);
void 	setup_chess_board (ChessBoard chess_board);
bool 	remove_piece (ChessBoard chess_board, File file, Rank rank){
  return true;
}
bool 	squares_share_file (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
  return s1_f == s2_f && s1_f <= 'h' && s1_f >= 'a' && s2_f <= 'h' && s2_f >= 'a'&& s1_r < 9 && s1_r > 0 && s2_r < 9 && s2_r > 0;
}
bool 	squares_share_rank (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
  return s1_r == s2_r && s1_f <= 'h' && s1_f >= 'a' && s2_f <= 'h' && s2_f >= 'a'&& s1_r < 9 && s1_r > 0 && s2_r < 9 && s2_r > 0;
}
bool 	squares_share_diagonal (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
  return true;
}
bool 	squares_share_knights_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
  return true;
}
bool 	squares_share_pawns_move (enum PieceColor color, enum MoveType move, File s1_f, Rank s1_r, File s2_f, Rank s2_r){
  return true;
}
bool 	squares_share_queens_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
  return true;
}
bool 	squares_share_kings_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
  return true;
}
