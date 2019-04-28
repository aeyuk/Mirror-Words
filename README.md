# Mirror-Words

## Description
This project takes a stream of text (strings) and formats the text into a set of lines with a specific width. 
However, rather than just do the standard left-justified text that you see in this paragraph, it takes the approach used by Leonardo Di Vinci and generates a “mirror” output of the text. 
That is, it prints the text from right-to-left rather than left-to-right. 

The program prompts the user for the length of an output line. The program then uses this as the width of all output lines. 
It right-justifies each line, as this is a true mirror of a standard left-justified paragraph.
It cannot do a true mirror of the text, as we do not have the ability to change the direction of our letters, so we will just print the text out backwards. 


## Example
Consider the input: 
              `The quick brown fox jumps over the lazy old dog.`

This text, written backwards, is:
              `.god dlo yzal eht revo spmuj xof nworb kciuq ehT`

Two sample executions of the program are shown below. Note that all lines are right-justified.

```bash
./a.out
Enter the output line length: 10
Enter your text (control-d to exit)
The quick brown fox jumps over the lazy old dog
<control-d>

  kciuq ehT
  xof nworb
 revo spmuj
   yzal eht
   .god dlo
```

## Compilation and Execution
Compile using `gcc -Wall mirror.c -o mirror`

Execute using `./mirror`
