static int topbar = 0;   
static int centered = 1;  
static int min_width = 1000; 
static int fuzzy = 1;       
static const char *fonts[] = {
	"FiraCodeNerdFont:pixelsize=18"
};
static const char *prompt      = NULL;
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#cccccc", "#282a36" },
	[SchemeSel] = { "#ffffff", "#004466" },
	[SchemeSelHighlight] = { "#d7d7d7", "#282f36" },
	[SchemeNormHighlight] = { "#e78481", "#282f36" },
	[SchemeOut] = { "#000000", "#00ffff" },
	[SchemeMid] = { "#d7d7d7", "#282f36" },
};

static unsigned int lines      = 0;
static unsigned int lineheight = 22;  
static unsigned int columns    = 0;


static const char worddelimiters[] = " ";

static unsigned int border_width = 0;  

// Local Variables:
// eval: (add-hook 'after-save-hook
//        (lambda ()
//          (when (string= (file-name-nondirectory (buffer-file-name)) "config.h")
//            (async-shell-command "sudo make install")))
//        nil t)
// End:
