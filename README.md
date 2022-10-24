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
|   enter + a      |   à                    |
|   enter + é      |   è                    |
|   enter + u      |   ù                    |
|   comma + a      |   â                    |
|   comma + é      |   ê                    |
|   comma + i      |   î                    |
|   comma + o      |   ô                    |
|   scolon + é     |   ë                    |
|   scolon + i     |   ï                    |
|   scolon + u     |   ü                    |
|   scolon + y     |   ÿ                    |

|      Keys        |                        |
|------------------|------------------------|
|   mouse + arrows |   adjust               |
|   arrows + f     |   fn                   |
|   c + r          |   ^                    |
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
|   e + r          |   €                    |
|   p + d          |   £                    |

|   Parenthesis    |                        |
|------------------|------------------------|
|   y + e          |   (                    |
|   u + w          |   (                    |
|   x + e          |   [                    |
|   i + w          |   ]                    |
|   y + i          |   {                    |
|   u + x          |   }                    |

|     Special      |                        |
|------------------|------------------------|
|   d + g + r      |   °                    |
|   d + i + a      |   ø   Ø                |
|   ^ + 1          |   ¹                    |
|   ^ + 2          |   ²                    |
|   ^ + 3          |   ³                    |


#### Layouts

![base](https://raw.githubusercontent.com/FLinguenheld/corne_pie/main/images/base.png "layout")  
![numeric](https://raw.githubusercontent.com/FLinguenheld/corne_pie/main/images/numeric.png "layout")  
![mouse](https://raw.githubusercontent.com/FLinguenheld/corne_pie/main/images/mouse.png "layout")  
![arrows](https://raw.githubusercontent.com/FLinguenheld/corne_pie/main/images/arrows.png "layout")  
![adjust](https://raw.githubusercontent.com/FLinguenheld/corne_pie/main/images/adjust.png "layout")  
![fn](https://raw.githubusercontent.com/FLinguenheld/corne_pie/main/images/fn.png "layout")
