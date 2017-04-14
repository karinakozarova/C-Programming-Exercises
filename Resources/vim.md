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

## Insert mode - inserting/appending text<br>
i - insert before the cursor<br>
I - insert at the beginning of the line<br>
a - insert (append) after the cursor<br>
A - insert (append) at the end of the line<br>
o - append (open) a new line below the current line<br>
O - append (open) a new line above the current line<br>
ea - insert (append) at the end of the word<br>
Esc - exit insert mode<br>

## Editing<br>
r - replace a single character<br>
J - join line below to the current one<br>
cc - change (replace) entire line<br>
cw - change (replace) to the end of the word<br>
c$ - change (replace) to the end of the line<br>
s - delete character and substitute text<br>
S - delete line and substitute text (same as cc)<br>
xp - transpose two letters (delete and paste)<br>
u - undo<br>
Ctrl + r - redo<br>
. - repeat last command<br>

## Marking text (visual mode)<br>
v - start visual mode, mark lines, then do a command (like y-yank)<br>
V - start linewise visual mode<br>
o - move to other end of marked area<br>
Ctrl + v - start visual block mode<br>
O - move to other corner of block<br>
aw - mark a word<br>
ab - a block with ()<br>
aB - a block with {}<br>
ib - inner block with ()<br>
iB - inner block with {}<br>
Esc - exit visual mode<br>

## Visual commands<br>
> - shift text right<br>
< - shift text left<br>
y - yank (copy) marked text<br>
d - delete marked text<br>
~ - switch case<br>

## Registers<br>
:reg - show registers content<br>
"xy - yank into register x<br>
"xp - paste contents of register x<br>
Tip Registers are being stored in ~/.viminfo, and will be loaded again on next restart of vim.<br>
Tip Register 0 contains always the value of the last yank command.<br>
<br>
## Marks<br>
:marks - list of marks<br>
ma - set current position for mark A<br>
\`a - jump to position of mark A<br>
\`a - yank text to position of mark A

## Macros
qa - record macro a<br>
q - stop recording macro<br>
@a - run macro a<br>
@@ - rerun last run macro<br>
Cut and paste<br>
yy - yank (copy) a line<br>
2yy - yank (copy) 2 lines<br>
yw - yank (copy) the characters of the word from the cursor position to the start of the next word<br>
y$ - yank (copy) to end of line<br>
p - put (paste) the clipboard after cursor<br>
P - put (paste) before cursor<br>
dd - delete (cut) a line<br>
2dd - delete (cut) 2 lines<br>
dw - delete (cut) the characters of the word from the cursor position to the start of the next word<br>
D - delete (cut) to the end of the line<br>
d$ - delete (cut) to the end of the line<br>
x - delete (cut) character<br>

## Exiting<br>
:w - write (save) the file, but don't exit<br>
:w !sudo tee % - write out the current file using sudo<br>
:wq or :x or ZZ - write (save) and quit<br>
:q - quit (fails if there are unsaved changes)<br>
:q! or ZQ - quit and throw away unsaved changes<br>
## Search and replace<br>
/pattern - search for pattern<br>
?pattern - search backward for pattern<br>
\vpattern - 'very magic' pattern: non-alphanumeric characters are interpreted as special regex symbols (no escaping needed)<br>
n - repeat search in same direction<br>
N - repeat search in opposite direction<br>
:%s/old/new/g - replace all old with new throughout file<br>
:%s/old/new/gc - replace all old with new throughout file with confirmations<br>
:noh - remove highlighting of search matches<br>


## Search in multiple files<br>
:vimgrep /pattern/ {file} - search for pattern in multiple files<br>
e.g. :vimgrep /foo/ **/*<br>
:cn - jump to the next match<br>
:cp - jump to the previous match<br>
:copen - open a window containing the list of matches<br>

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
