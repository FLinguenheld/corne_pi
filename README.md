### corne_pie

My personal keymap for the corne keyboard with a pie.

[![forthebadge](https://forthebadge.com/images/badges/built-with-love.svg)](https://forthebadge.com)


#### Install

Switch to the qmk develop branch, copy this repo in the folder :

    ~/qmk_firmware/keyboards/crkbd/keymaps/

#### Compile and flash

Change the master in the config.h file :

    // #define MASTER_LEFT
    #define MASTER_RIGHT

then :

    qmk compile && qmk flash -e CONVERT_TO=promicro_rp2040

and :

    Click twice on the flash button and use nautilus for instance to clic on the keyboard.  
    Don't forget to flash with the double tap bootloader define before soldering.

#### Links

[qmk](https://docs.qmk.fm/#/)  
[foostan](https://github.com/foostan/crkbd)

#### Keymap

All french letters are print with unicode.
Use the standard us keymap :

    setxkbmap -layout us

#### Combos

|     French       |                        |
|------------------|------------------------|
|   é + i          |   ç                    |
|   é + a          |   æ                    |
|   é + o          |   œ                    |
|   space + a      |   à                    |
|   space + e      |   è                    |
|   space + i      |   ì                    |
|   space + o      |   ò                    |
|   space + u      |   ù                    |
|   comma + a      |   â                    |
|   comma + e      |   ê                    |
|   comma + i      |   î                    |
|   comma + o      |   ô                    |
|   comma + u      |   û                    |
|   scolon + a     |   ä                    |
|   scolon + e     |   ë                    |
|   scolon + i     |   ï                    |
|   scolon + o     |   ö                    |
|   scolon + u     |   ü                    |
|   scolon + y     |   ÿ                    |

|      Keys        |                        |
|------------------|------------------------|
|   mouse + arrows |   adjust               |
|   arrows + f     |   fn                   |
|   q + s          |   ^                    |
|   g + r          |   \`                   |
|   h + s          |   #                    |
|   a + e          |   &                    |
|   i + e          |   \|                   |
|   s + l          |   /                    |
|   d + r          |   \                    |
|   t + d          |   ~                    |
|   s + r          |   _                    |
|   t + r          |   -                    |
|   p + u          |   +                    |
|   e + u          |   =                    |
|   p + e          |   %                    |
|   s + t          |   *                    |
|   enter + s      |   shifted enter        |
|   d + l          |   $                    |
|   a + i          |   @                    |

|   Parenthesis    |                        |
|------------------|------------------------|
|   y + e          |   (                    |
|   u + w          |   (                    |
|   x + e          |   [                    |
|   i + w          |   ]                    |
|   y + i          |   {                    |
|   u + x          |   }                    |

#### Leader

|   -                         |                        |
|-----------------------------|------------------------|
|   leader + M + S            |   mail short           |
|   leader + M + L            |   mail long            |
|   leader + D + E + G        |   °                    |
|   leader + C + O + P        |   ©                    |
|   leader + R + E + G        |   ®                    |
|   leader + D + I + A        |   ø                    |
|   leader + D + I + A + M    |   Ø                    |
|   leader + E + U + R        |   €                    |
|   leader + P + O + U        |   £                    |
|   leader + Y + E + N        |   ¥                    |
|   leader + P + I            |   π                    |
|   leader + P + I + I        |   Π                    |
|   leader + O + M + E        |   ω                    |
|   leader + O + M + E + G    |   Ω                    |
|   leader + S + U + P + C    |   ⁰   (too complicated)|
|   leader + S + U + B + C    |   ₀                    |


#### Layouts

![base](https://raw.githubusercontent.com/FLinguenheld/corne_pie/main/images/base.png "layout")  
![numeric](https://raw.githubusercontent.com/FLinguenheld/corne_pie/main/images/numeric.png "layout")  
![mouse](https://raw.githubusercontent.com/FLinguenheld/corne_pie/main/images/mouse.png "layout")  
![arrows](https://raw.githubusercontent.com/FLinguenheld/corne_pie/main/images/arrows.png "layout")  
![adjust](https://raw.githubusercontent.com/FLinguenheld/corne_pie/main/images/adjust.png "layout")  
![fn](https://raw.githubusercontent.com/FLinguenheld/corne_pie/main/images/fn.png "layout")
