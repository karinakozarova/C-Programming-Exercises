#include <stdio.h>
#include <string.h>

struct note_t {
	char message[20];
};

struct board_t {
	struct note_t notes[10];
	int notes_count;
};

struct board_t copy_board(struct board_t reference);
void filter_board_notes(struct board_t *board);

int main() {
	

	return 0;
}

struct board_t copy_board(struct board_t reference) {
	struct board_t new_board;

	for (int i = 0; i < reference.notes_count; i++) {
		struct note_t new_note;
		strcpy(new_note.message, reference.notes[i].message);
		new_board.notes[i] = new_note;
	}

	return new_board;
}

void filter_board_notes(struct board_t *board) {
	for (int i = 0; i < board->notes_count; i++) {
		int len = strlen(board->notes[i].message);

		if (len < 5 || len > 15) {
			for (int k =i; k < board->notes_count - 1; k++) {
				board->notes[k] = board->notes[k + 1];
			}

			board->notes_count--;
			i--;
		}
	}
}




