/************************************/
/**     COLORSCHEME COMPONENTS      */
/************************************/
#define SIZE_STRING 8

typedef struct {
    char Background[SIZE_STRING];
    char Foreground[SIZE_STRING];
} Scheme;

typedef struct {
    Scheme Normal;
    Scheme Select;
} ColorScheme;


/************************************/
/**         COLORSCHEMES            */
/************************************/
const ColorScheme Default = {
    .Normal = {
        .Background = "#222222",
        .Foreground = "#bbbbbb",
    },
    .Select = {
        .Background = "#005577",
        .Foreground = "#eeeeee",
    }
};

const ColorScheme DoomOne = {
    .Normal = {
        .Background = "#14191F",
        .Foreground = "#8C92AC",
    },
    .Select = {
        .Background = "#1F2833",
        .Foreground = "#F3F3F6",
    }
};

const ColorScheme Gruvbox = {
    .Normal = {
        .Background = "#282828",
        .Foreground = "#ebdbb2",
    },
    .Select = {
        .Background = "#1d2021",
        .Foreground = "#ffaf00",
    }
};

/************************************/
/**      CURRENT COLORSCHEME        */
/************************************/
const ColorScheme CurrentColorScheme = Gruvbox;

