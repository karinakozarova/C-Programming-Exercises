# Vim Cheat Sheet

:help keyword - open help for keyword <br>
:o file - open file <br>
:saveas file - save file as <br>
:close - close current pane <br>

## Cursor movement
h - move cursor left <br>
j - move cursor down<br>
k - move cursor up<br>
l - move cursor right<br>
H - move to top of screen<br>
M - move to middle of screen<br>
L - move to bottom of screen<br>
w - jump forwards to the start of a word<br>
W - jump forwards to the start of a word (words can contain punctuation)<br>
e - jump forwards to the end of a word<br>
E - jump forwards to the end of a word (words can contain punctuation)<br>
b - jump backwards to the start of a word<br>
B - jump backwards to the start of a word (words can contain punctuation)<br>
0 - jump to the start of the line<br>
^ - jump to the first non-blank character of the line <br>
$ - jump to the end of the line<br>
g_ - jump to the last non-blank character of the line<br>
gg - go to the first line of the document<br>
G - go to the last line of the document<br>
5G - go to line 5<br>
fx - jump to next occurrence of character x<br>
tx - jump to before next occurrence of character x<br>
} - jump to next paragraph (or function/block, when editing code)<br>
{ - jump to previous paragraph (or function/block, when editing code)<br>
zz - center cursor on screen<br>
Ctrl + b - move back one full screen<br>
Ctrl + f - move forward one full screen<br>
Ctrl + d - move forward 1/2 a screen<br>
Ctrl + u - move back 1/2 a screen<br>
> Tip: Prefix a cursor movement command with a number to repeat it. For example, 4j moves down 4 lines.<br>

## Insert mode - inserting/appending text
i - insert before the cursor
I - insert at the beginning of the line
a - insert (append) after the cursor
A - insert (append) at the end of the line
o - append (open) a new line below the current line
O - append (open) a new line above the current line
ea - insert (append) at the end of the word
Esc - exit insert mode

## Editing
r - replace a single character
J - join line below to the current one
cc - change (replace) entire line
cw - change (replace) to the end of the word
c$ - change (replace) to the end of the line
s - delete character and substitute text
S - delete line and substitute text (same as cc)
xp - transpose two letters (delete and paste)
u - undo
Ctrl + r - redo
. - repeat last command

## Marking text (visual mode)
v - start visual mode, mark lines, then do a command (like y-yank)
V - start linewise visual mode
o - move to other end of marked area
Ctrl + v - start visual block mode
O - move to other corner of block
aw - mark a word
ab - a block with ()
aB - a block with {}
ib - inner block with ()
iB - inner block with {}
Esc - exit visual mode

## Visual commands
> - shift text right
< - shift text left
y - yank (copy) marked text
d - delete marked text
~ - switch case

## Registers
:reg - show registers content
"xy - yank into register x
"xp - paste contents of register x
Tip Registers are being stored in ~/.viminfo, and will be loaded again on next restart of vim.
Tip Register 0 contains always the value of the last yank command.

## Marks
:marks - list of marks
ma - set current position for mark A
`a - jump to position of mark A
y`a - yank text to position of mark A

## Macros
qa - record macro a
q - stop recording macro
@a - run macro a
@@ - rerun last run macro
Cut and paste
yy - yank (copy) a line
2yy - yank (copy) 2 lines
yw - yank (copy) the characters of the word from the cursor position to the start of the next word
y$ - yank (copy) to end of line
p - put (paste) the clipboard after cursor
P - put (paste) before cursor
dd - delete (cut) a line
2dd - delete (cut) 2 lines
dw - delete (cut) the characters of the word from the cursor position to the start of the next word
D - delete (cut) to the end of the line
d$ - delete (cut) to the end of the line
x - delete (cut) character

## Exiting
:w - write (save) the file, but don't exit
:w !sudo tee % - write out the current file using sudo
:wq or :x or ZZ - write (save) and quit
:q - quit (fails if there are unsaved changes)
:q! or ZQ - quit and throw away unsaved changes
Search and replace
/pattern - search for pattern
?pattern - search backward for pattern
\vpattern - 'very magic' pattern: non-alphanumeric characters are interpreted as special regex symbols (no escaping needed)
n - repeat search in same direction
N - repeat search in opposite direction
:%s/old/new/g - replace all old with new throughout file
:%s/old/new/gc - replace all old with new throughout file with confirmations
:noh - remove highlighting of search matches


## Search in multiple files
:vimgrep /pattern/ {file} - search for pattern in multiple files
e.g. :vimgrep /foo/ **/*
:cn - jump to the next match
:cp - jump to the previous match
:copen - open a window containing the list of matches

## Working with multiple files<br>
:e file - edit a file in a new buffer<br>
:bnext or :bn - go to the next buffer<br>
:bprev or :bp - go to the previous buffer<br>
:bd - delete a buffer (close a file)<br>
:ls - list all open buffers<br>
:sp file - open a file in a new buffer and split window<br>
:vsp file - open a file in a new buffer and vertically split window<br>
Ctrl + ws - split window<br>
Ctrl + ww - switch windows<br>
Ctrl + wq - quit a window<br>
Ctrl + wv - split window vertically<br>
Ctrl + wh - move cursor to the left window (vertical split)<br>
Ctrl + wl - move cursor to the right window (vertical split)<br>
Ctrl + wj - move cursor to the window below (horizontal split)<br>
Ctrl + wk - move cursor to the window above (horizontal split)<br>

## Tabs
:tabnew or :tabnew file - open a file in a new tab<br>
Ctrl + wT - move the current split window into its own tab<br>
gt or :tabnext or :tabn - move to the next tab<br>
gT or :tabprev or :tabp - move to the previous tab<br>
#gt - move to tab number #<br>
:tabmove # - move current tab to the #th position (indexed from 0)<br>
:tabclose or :tabc - close the current tab and all its windows<br>
:tabonly or :tabo - close all tabs except for the current one<br>
:tabdo command - run the command on all tabs (e.g. :tabdo q - closes all opened tabs) <br>
