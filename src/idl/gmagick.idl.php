<?php
/**
 * Automatically generated by running "php schema.php magick".
 *
 * You may modify the file, but re-running schema.php against this file will
 * standardize the format without losing your schema changes. It does lose
 * any changes that are not part of schema. Use "note" field to comment on
 * schema itself, and "note" fields are not used in any code generation but
 * only staying within this file.
 */
///////////////////////////////////////////////////////////////////////////////
// Preamble: C++ code inserted at beginning of ext_{name}.h

DefinePreamble(<<<CPP
#include <util/exception.h>
#include <string>

struct _PixelWand;
typedef struct _PixelWand PixelWand;

struct _MagickWand;
typedef struct _MagickWand MagickWand;
CPP
);

///////////////////////////////////////////////////////////////////////////////
// Constants
//
// array (
//   'name' => name of the constant
//   'type' => type of the constant
//   'note' => additional note about this constant's schema
// )

///////////////////////////////////////////////////////////////////////////////
// Functions
//
// array (
//   'name'   => name of the function
//   'desc'   => description of the function's purpose
//   'flags'  => attributes of the function, see base.php for possible values
//   'opt'    => optimization callback function's name for compiler
//   'note'   => additional note about this function's schema
//   'return' =>
//      array (
//        'type'  => return type, use Reference for ref return
//        'desc'  => description of the return value
//      )
//   'args'   => arguments
//      array (
//        'name'  => name of the argument
//        'type'  => type of the argument, use Reference for output parameter
//        'value' => default value of the argument
//        'desc'  => description of the argument
//      )
// )

BeginClass(
 array (
   'name'   => 'GmagickPixel',
   'bases'  => array('Sweepable'),
   'desc'   => 'Gmagick pixel class',
   'flags'  => HasDocComment,
   'footer' => <<<EOT
   public: 
     PixelWand *get_PixelWand();
   private:
     PixelWand *pixel_wand;
EOT
 ));

DefineFunction(
  array(
    'name'   => "__construct",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => null,
    ),
    'args'   => array(
      array(
        'name'   => "color",
        'type'   => String,
        'value'  => "null_string",
      ),
     )
  ));

DefineFunction(
  array(
    'name'   => "__destruct",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
    ),
  ));

EndClass(
);

BeginClass(
 array (
   'name'   => 'Gmagick',
   'bases'  => array('Sweepable'),
   'desc'   => 'Gmagick main class',
   'flags'  => HasDocComment,
   'footer' => <<<EOT
 private:
  void checkResult(int result);
  void checkNotEmpty(); 
  void checkHasFormat();
  void throwException(const char * magick_message, int magick_severity);
  bool adjust_dimensions(bool bestfit, long desired_width, long desired_height, long *new_width, long *new_height);
  MagickWand *magick_wand;
EOT
 ));

DefineFunction(
  array(
    'name'   => "__construct",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => null,
    ),
  ));

DefineFunction(
  array(
    'name'   => "__destruct",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
    ),
  ));

DefineFunction(
  array(
    'name'   => "destroy",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => null,
    ),
  ));

DefineFunction(
  array(
    'name'   => "getcopyright",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => String,
    ),
  ));

DefineFunction(
  array(
    'name'   => "readimageblob",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Object,
      'desc'   => "The Gmagick object itself (for method chaining).",
    ),
    'args'   => array(
     array(
        'name'   => "blob",
        'type'   => String,
      ),
      array(
        'name'   => "filename",
        'type'   => String,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "getimageblob",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => String,
      'desc'   => "The image blob",
    ),
  ));

DefineFunction(
  array(
    'name'   => "getimagefilename",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => String,
      'desc'   => "The filename of a particular image in a sequence",
    ),
  ));

DefineFunction(
  array(
    'name'   => "getimagetype",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Int64,
      'desc'   => "The potential image type",
    ),
  ));

DefineFunction(
  array(
    'name'   => "getimageformat",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => String,
      'desc'   => "The format of a particular image in a sequence",
    ),
  ));

DefineFunction(
  array(
    'name'   => "getimagecolorspace",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Int64,
      'desc'   => "The color space of a particular image in a sequence",
    ),
  ));

DefineFunction(
  array(
    'name'   => "getimageprofile",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => String,
      'desc'   => "The named image profile",
    ),
    'args'   => array(
      array(
        'name'   => "profile",
        'type'   => String,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "profileimage",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Object,
      'desc'   => "The Gmagick object itself (for method chaining).",
    ),
    'args'   => array(
      array(
        'name'   => "name",
        'type'   => String,
      ),
      array(
        'name'   => "profile",
        'type'   => String,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "setcompressionquality",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Object,
      'desc'   => "The Gmagick object itself (for method chaining).",
    ),
    'args'   => array(
      array(
        'name'   => "quality",
        'type'   => Int64,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "readimage",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Object,
      'desc'   => "The Gmagick object itself (for method chaining).",
    ),
    'args'   => array(
      array(
        'name'   => "filename",
        'type'   => String,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "getimagewidth",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Int64,
    ),
  ));

DefineFunction(
  array(
    'name'   => "getimageheight",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Int64,
    ),
  ));

DefineFunction(
  array(
    'name'   => "scaleimage",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Object,
      'desc'   => "The Gmagick object itself (for method chaining).",
    ),
    'args'   => array(
      array(
        'name'   => "columns",
        'type'   => Int64,
      ),
      array(
        'name'   => "rows",
        'type'   => Int64,
      ),
	  array(
        'name'   => "fit",
        'type'   => Boolean,
        'value'  => "false",
	  ),	
    ),
  ));

DefineFunction(
  array(
    'name'   => "resizeimage",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Object,
      'desc'   => "The Gmagick object itself (for method chaining).",
    ),
    'args'   => array(
      array(
        'name'   => "columns",
        'type'   => Int64,
      ),
      array(
        'name'   => "rows",
        'type'   => Int64,
      ),
      array(
        'name'   => "filter_type",
        'type'   => Int64,
      ),
      array(
        'name'   => "blur",
        'type'   => Double,
      ),
	  array(
        'name'   => "fit",
        'type'   => Boolean,
        'value'  => "false",
	  ),	
    ),
  ));

DefineFunction(
  array(
    'name'   => "rotateimage",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Object,
      'desc'   => "The Gmagick object itself (for method chaining).",
    ),
    'args'   => array(
      array(
        'name'   => "background",
        'type'   => Resource,
      ),
      array(
        'name'   => "degrees",
        'type'   => Double,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "setimageformat",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Object,
      'desc'   => "The Gmagick object itself (for method chaining).",
    ),
    'args'   => array(
      array(
        'name'   => "format",
        'type'   => String,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "cropimage",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Object,
      'desc'   => "The Gmagick object itself (for method chaining).",
    ),
    'args'   => array(
      array(
        'name'   => "width",
        'type'   => Int64,
      ),
      array(
        'name'   => "height",
        'type'   => Int64,
      ),
      array(
        'name'   => "x",
        'type'   => Int64,
      ),
      array(
        'name'   => "y",
        'type'   => Int64,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "writeimage",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Object,
      'desc'   => "The Gmagick object itself (for method chaining).",
    ),
    'args'   => array(
      array(
        'name'   => "filename",
        'type'   => String,
      ),
	  array(
        'name'   => "all_frames",
        'type'   => Boolean,
        'value'  => "false",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "borderimage",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Object,
      'desc'   => "The Gmagick object itself (for method chaining).",
    ),
    'args'   => array(
      array(
        'name'   => "bordercolor",
        'type'   => Resource,
      ),
      array(
        'name'   => "width",
        'type'   => Int64,
      ),
      array(
        'name'   => "height",
        'type'   => Int64,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "setimagebackgroundcolor",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Object,
      'desc'   => "The Gmagick object itself (for method chaining).",
    ),
    'args'   => array(
      array(
        'name'   => "color",
        'type'   => Resource,
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "flattenimages",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Object,
      'desc'   => "The Gmagick object itself (for method chaining).",
    ),
  ));

DefineFunction(
  array(
    'name'   => "getimage",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Object,
      'desc'   => "Returns a new Gmagick object with the current image sequence.",
    ),
  ));

DefineConstant(array('name' => "FILTER_UNDEFINED", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_DEFAULT", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_UNDEFINED", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_NO", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_ADD", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_ATOP", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_BUMPMAP", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_CLEAR", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_COLORIZE", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_COPYBLACK", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_COPYBLUE", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_COPY", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_COPYCYAN", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_COPYGREEN", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_COPYMAGENTA", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_COPYOPACITY", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_COPYRED", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_COPYYELLOW", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_DARKEN", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_DIFFERENCE", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_DISPLACE", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_DISSOLVE", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_HUE", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_IN", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_LIGHTEN", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_LUMINIZE", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_MINUS", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_MODULATE", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_MULTIPLY", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_OUT", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_OVER", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_OVERLAY", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_PLUS", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_REPLACE", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_SATURATE", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_SCREEN", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_SUBTRACT", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_THRESHOLD", 'type' => Int32,));
DefineConstant(array('name' => "COMPOSITE_XOR", 'type' => Int32,));
DefineConstant(array('name' => "MONTAGEMODE_FRAME", 'type' => Int32,));
DefineConstant(array('name' => "MONTAGEMODE_UNFRAME", 'type' => Int32,));
DefineConstant(array('name' => "MONTAGEMODE_CONCATENATE", 'type' => Int32,));
DefineConstant(array('name' => "STYLE_NORMAL", 'type' => Int32,));
DefineConstant(array('name' => "STYLE_ITALIC", 'type' => Int32,));
DefineConstant(array('name' => "STYLE_OBLIQUE", 'type' => Int32,));
DefineConstant(array('name' => "STYLE_ANY", 'type' => Int32,));
DefineConstant(array('name' => "FILTER_UNDEFINED", 'type' => Int32,));
DefineConstant(array('name' => "FILTER_POINT", 'type' => Int32,));
DefineConstant(array('name' => "FILTER_BOX", 'type' => Int32,));
DefineConstant(array('name' => "FILTER_TRIANGLE", 'type' => Int32,));
DefineConstant(array('name' => "FILTER_HERMITE", 'type' => Int32,));
DefineConstant(array('name' => "FILTER_HANNING", 'type' => Int32,));
DefineConstant(array('name' => "FILTER_HAMMING", 'type' => Int32,));
DefineConstant(array('name' => "FILTER_BLACKMAN", 'type' => Int32,));
DefineConstant(array('name' => "FILTER_GAUSSIAN", 'type' => Int32,));
DefineConstant(array('name' => "FILTER_QUADRATIC", 'type' => Int32,));
DefineConstant(array('name' => "FILTER_CUBIC", 'type' => Int32,));
DefineConstant(array('name' => "FILTER_CATROM", 'type' => Int32,));
DefineConstant(array('name' => "FILTER_MITCHELL", 'type' => Int32,));
DefineConstant(array('name' => "FILTER_LANCZOS", 'type' => Int32,));
DefineConstant(array('name' => "FILTER_BESSEL", 'type' => Int32,));
DefineConstant(array('name' => "FILTER_SINC", 'type' => Int32,));
DefineConstant(array('name' => "IMGTYPE_UNDEFINED", 'type' => Int32,));
DefineConstant(array('name' => "IMGTYPE_BILEVEL", 'type' => Int32,));
DefineConstant(array('name' => "IMGTYPE_GRAYSCALE", 'type' => Int32,));
DefineConstant(array('name' => "IMGTYPE_GRAYSCALEMATTE", 'type' => Int32,));
DefineConstant(array('name' => "IMGTYPE_PALETTE", 'type' => Int32,));
DefineConstant(array('name' => "IMGTYPE_PALETTEMATTE", 'type' => Int32,));
DefineConstant(array('name' => "IMGTYPE_TRUECOLOR", 'type' => Int32,));
DefineConstant(array('name' => "IMGTYPE_TRUECOLORMATTE", 'type' => Int32,));
DefineConstant(array('name' => "IMGTYPE_COLORSEPARATION", 'type' => Int32,));
DefineConstant(array('name' => "IMGTYPE_COLORSEPARATIONMATTE", 'type' => Int32,));
DefineConstant(array('name' => "IMGTYPE_OPTIMIZE", 'type' => Int32,));
DefineConstant(array('name' => "RESOLUTION_UNDEFINED", 'type' => Int32,));
DefineConstant(array('name' => "RESOLUTION_PIXELSPERINCH", 'type' => Int32,));
DefineConstant(array('name' => "RESOLUTION_PIXELSPERCENTIMETER", 'type' => Int32,));
DefineConstant(array('name' => "COMPRESSION_UNDEFINED", 'type' => Int32,));
DefineConstant(array('name' => "COMPRESSION_NO", 'type' => Int32,));
DefineConstant(array('name' => "COMPRESSION_BZIP", 'type' => Int32,));
DefineConstant(array('name' => "COMPRESSION_FAX", 'type' => Int32,));
DefineConstant(array('name' => "COMPRESSION_GROUP4", 'type' => Int32,));
DefineConstant(array('name' => "COMPRESSION_JPEG", 'type' => Int32,));
DefineConstant(array('name' => "COMPRESSION_LOSSLESSJPEG", 'type' => Int32,));
DefineConstant(array('name' => "COMPRESSION_LZW", 'type' => Int32,));
DefineConstant(array('name' => "COMPRESSION_RLE", 'type' => Int32,));
DefineConstant(array('name' => "COMPRESSION_ZIP", 'type' => Int32,));
DefineConstant(array('name' => "PAINT_POINT", 'type' => Int32,));
DefineConstant(array('name' => "PAINT_REPLACE", 'type' => Int32,));
DefineConstant(array('name' => "PAINT_FLOODFILL", 'type' => Int32,));
DefineConstant(array('name' => "PAINT_FILLTOBORDER", 'type' => Int32,));
DefineConstant(array('name' => "PAINT_RESET", 'type' => Int32,));
DefineConstant(array('name' => "GRAVITY_NORTHWEST", 'type' => Int32,));
DefineConstant(array('name' => "GRAVITY_NORTH", 'type' => Int32,));
DefineConstant(array('name' => "GRAVITY_NORTHEAST", 'type' => Int32,));
DefineConstant(array('name' => "GRAVITY_WEST", 'type' => Int32,));
DefineConstant(array('name' => "GRAVITY_CENTER", 'type' => Int32,));
DefineConstant(array('name' => "GRAVITY_EAST", 'type' => Int32,));
DefineConstant(array('name' => "GRAVITY_SOUTHWEST", 'type' => Int32,));
DefineConstant(array('name' => "GRAVITY_SOUTH", 'type' => Int32,));
DefineConstant(array('name' => "GRAVITY_SOUTHEAST", 'type' => Int32,));
DefineConstant(array('name' => "STRETCH_NORMAL", 'type' => Int32,));
DefineConstant(array('name' => "STRETCH_ULTRACONDENSED", 'type' => Int32,));
DefineConstant(array('name' => "STRETCH_CONDENSED", 'type' => Int32,));
DefineConstant(array('name' => "STRETCH_SEMICONDENSED", 'type' => Int32,));
DefineConstant(array('name' => "STRETCH_SEMIEXPANDED", 'type' => Int32,));
DefineConstant(array('name' => "STRETCH_EXPANDED", 'type' => Int32,));
DefineConstant(array('name' => "STRETCH_EXTRAEXPANDED", 'type' => Int32,));
DefineConstant(array('name' => "STRETCH_ULTRAEXPANDED", 'type' => Int32,));
DefineConstant(array('name' => "STRETCH_ANY", 'type' => Int32,));
DefineConstant(array('name' => "ALIGN_UNDEFINED", 'type' => Int32,));
DefineConstant(array('name' => "ALIGN_LEFT", 'type' => Int32,));
DefineConstant(array('name' => "ALIGN_CENTER", 'type' => Int32,));
DefineConstant(array('name' => "ALIGN_RIGHT", 'type' => Int32,));
DefineConstant(array('name' => "DECORATION_NO", 'type' => Int32,));
DefineConstant(array('name' => "DECORATION_UNDERLINE", 'type' => Int32,));
DefineConstant(array('name' => "DECORATION_OVERLINE", 'type' => Int32,));
DefineConstant(array('name' => "DECORATION_LINETROUGH", 'type' => Int32,));
DefineConstant(array('name' => "NOISE_UNIFORM", 'type' => Int32,));
DefineConstant(array('name' => "NOISE_GAUSSIAN", 'type' => Int32,));
DefineConstant(array('name' => "NOISE_MULTIPLICATIVEGAUSSIAN", 'type' => Int32,));
DefineConstant(array('name' => "NOISE_IMPULSE", 'type' => Int32,));
DefineConstant(array('name' => "NOISE_LAPLACIAN", 'type' => Int32,));
DefineConstant(array('name' => "NOISE_POISSON", 'type' => Int32,));
DefineConstant(array('name' => "CHANNEL_UNDEFINED", 'type' => Int32,));
DefineConstant(array('name' => "CHANNEL_RED", 'type' => Int32,));
DefineConstant(array('name' => "CHANNEL_GRAY", 'type' => Int32,));
DefineConstant(array('name' => "CHANNEL_CYAN", 'type' => Int32,));
DefineConstant(array('name' => "CHANNEL_GREEN", 'type' => Int32,));
DefineConstant(array('name' => "CHANNEL_MAGENTA", 'type' => Int32,));
DefineConstant(array('name' => "CHANNEL_BLUE", 'type' => Int32,));
DefineConstant(array('name' => "CHANNEL_YELLOW", 'type' => Int32,));
DefineConstant(array('name' => "CHANNEL_OPACITY", 'type' => Int32,));
DefineConstant(array('name' => "CHANNEL_MATTE", 'type' => Int32,));
DefineConstant(array('name' => "CHANNEL_BLACK", 'type' => Int32,));
DefineConstant(array('name' => "CHANNEL_INDEX", 'type' => Int32,));
DefineConstant(array('name' => "CHANNEL_ALL", 'type' => Int32,));
DefineConstant(array('name' => "METRIC_UNDEFINED", 'type' => Int32,));
DefineConstant(array('name' => "METRIC_MEANABSOLUTEERROR", 'type' => Int32,));
DefineConstant(array('name' => "METRIC_MEANSQUAREERROR", 'type' => Int32,));
DefineConstant(array('name' => "METRIC_PEAKABSOLUTEERROR", 'type' => Int32,));
DefineConstant(array('name' => "METRIC_PEAKSIGNALTONOISERATIO", 'type' => Int32,));
DefineConstant(array('name' => "METRIC_ROOTMEANSQUAREDERROR", 'type' => Int32,));
DefineConstant(array('name' => "PIXEL_CHAR", 'type' => Int32,));
DefineConstant(array('name' => "PIXEL_DOUBLE", 'type' => Int32,));
DefineConstant(array('name' => "PIXEL_FLOAT", 'type' => Int32,));
DefineConstant(array('name' => "PIXEL_INTEGER", 'type' => Int32,));
DefineConstant(array('name' => "PIXEL_LONG", 'type' => Int32,));
DefineConstant(array('name' => "PIXEL_SHORT", 'type' => Int32,));
DefineConstant(array('name' => "COLORSPACE_UNDEFINED", 'type' => Int32,));
DefineConstant(array('name' => "COLORSPACE_RGB", 'type' => Int32,));
DefineConstant(array('name' => "COLORSPACE_GRAY", 'type' => Int32,));
DefineConstant(array('name' => "COLORSPACE_TRANSPARENT", 'type' => Int32,));
DefineConstant(array('name' => "COLORSPACE_OHTA", 'type' => Int32,));
DefineConstant(array('name' => "COLORSPACE_LAB", 'type' => Int32,));
DefineConstant(array('name' => "COLORSPACE_XYZ", 'type' => Int32,));
DefineConstant(array('name' => "COLORSPACE_YCBCR", 'type' => Int32,));
DefineConstant(array('name' => "COLORSPACE_YCC", 'type' => Int32,));
DefineConstant(array('name' => "COLORSPACE_YIQ", 'type' => Int32,));
DefineConstant(array('name' => "COLORSPACE_YPBPR", 'type' => Int32,));
DefineConstant(array('name' => "COLORSPACE_YUV", 'type' => Int32,));
DefineConstant(array('name' => "COLORSPACE_CMYK", 'type' => Int32,));
DefineConstant(array('name' => "COLORSPACE_SRGB", 'type' => Int32,));
DefineConstant(array('name' => "COLORSPACE_HSL", 'type' => Int32,));
DefineConstant(array('name' => "COLORSPACE_HWB", 'type' => Int32,));
DefineConstant(array('name' => "VIRTUALPIXELMETHOD_UNDEFINED", 'type' => Int32,));
DefineConstant(array('name' => "VIRTUALPIXELMETHOD_CONSTANT", 'type' => Int32,));
DefineConstant(array('name' => "VIRTUALPIXELMETHOD_EDGE", 'type' => Int32,));
DefineConstant(array('name' => "VIRTUALPIXELMETHOD_MIRROR", 'type' => Int32,));
DefineConstant(array('name' => "VIRTUALPIXELMETHOD_TILE", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_UNDEFINED", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_ROTATE", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_SHEAR", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_ROLL", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_HUE", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_SATURATION", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_BRIGHTNESS", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_GAMMA", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_SPIFF", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_DULL", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_GRAYSCALE", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_QUANTIZE", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_DESPECKLE", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_REDUCENOISE", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_ADDNOISE", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_SHARPEN", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_BLUR", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_THRESHOLD", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_EDGEDETECT", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_SPREAD", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_SOLARIZE", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_SHADE", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_RAISE", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_SEGMENT", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_SWIRL", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_IMPLODE", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_WAVE", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_OILPAINT", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_CHARCOALDRAWING", 'type' => Int32,));
DefineConstant(array('name' => "PREVIEW_JPEG", 'type' => Int32,));
DefineConstant(array('name' => "RENDERINGINTENT_UNDEFINED", 'type' => Int32,));
DefineConstant(array('name' => "RENDERINGINTENT_SATURATION", 'type' => Int32,));
DefineConstant(array('name' => "RENDERINGINTENT_PERCEPTUAL", 'type' => Int32,));
DefineConstant(array('name' => "RENDERINGINTENT_ABSOLUTE", 'type' => Int32,));
DefineConstant(array('name' => "RENDERINGINTENT_RELATIVE", 'type' => Int32,));
DefineConstant(array('name' => "INTERLACE_UNDEFINED", 'type' => Int32,));
DefineConstant(array('name' => "INTERLACE_NO", 'type' => Int32,));
DefineConstant(array('name' => "INTERLACE_LINE", 'type' => Int32,));
DefineConstant(array('name' => "INTERLACE_PLANE", 'type' => Int32,));
DefineConstant(array('name' => "INTERLACE_PARTITION", 'type' => Int32,));
DefineConstant(array('name' => "FILLRULE_UNDEFINED", 'type' => Int32,));
DefineConstant(array('name' => "FILLRULE_EVENODD", 'type' => Int32,));
DefineConstant(array('name' => "FILLRULE_NONZERO", 'type' => Int32,));
DefineConstant(array('name' => "PATHUNITS_USERSPACE", 'type' => Int32,));
DefineConstant(array('name' => "PATHUNITS_USERSPACEONUSE", 'type' => Int32,));
DefineConstant(array('name' => "PATHUNITS_OBJECTBOUNDINGBOX", 'type' => Int32,));
DefineConstant(array('name' => "LINECAP_UNDEFINED", 'type' => Int32,));
DefineConstant(array('name' => "LINECAP_BUTT", 'type' => Int32,));
DefineConstant(array('name' => "LINECAP_ROUND", 'type' => Int32,));
DefineConstant(array('name' => "LINECAP_SQUARE", 'type' => Int32,));
DefineConstant(array('name' => "LINEJOIN_UNDEFINED", 'type' => Int32,));
DefineConstant(array('name' => "LINEJOIN_MITER", 'type' => Int32,));
DefineConstant(array('name' => "LINEJOIN_ROUND", 'type' => Int32,));
DefineConstant(array('name' => "LINEJOIN_BEVEL", 'type' => Int32,));
DefineConstant(array('name' => "RESOURCETYPE_UNDEFINED", 'type' => Int32,));
DefineConstant(array('name' => "RESOURCETYPE_AREA", 'type' => Int32,));
DefineConstant(array('name' => "RESOURCETYPE_DISK", 'type' => Int32,));
DefineConstant(array('name' => "RESOURCETYPE_FILE", 'type' => Int32,));
DefineConstant(array('name' => "RESOURCETYPE_MAP", 'type' => Int32,));
DefineConstant(array('name' => "RESOURCETYPE_MEMORY", 'type' => Int32,));
DefineConstant(array('name' => "DISPOSE_UNDEFINED", 'type' => Int32,));
DefineConstant(array('name' => "DISPOSE_NONE", 'type' => Int32,));
DefineConstant(array('name' => "DISPOSE_BACKGROUND", 'type' => Int32,));
DefineConstant(array('name' => "DISPOSE_PREVIOUS", 'type' => Int32,));

EndClass(
);

///////////////////////////////////////////////////////////////////////////////
// Classes
//
// BeginClass
// array (
//   'name'   => name of the class
//   'desc'   => description of the class's purpose
//   'flags'  => attributes of the class, see base.php for possible values
//   'note'   => additional note about this class's schema
//   'parent' => parent class name, if any
//   'ifaces' => array of interfaces tihs class implements
//   'bases'  => extra internal and special base classes this class requires
//   'footer' => extra C++ inserted at end of class declaration
// )
//
// DefineConstant(..)
// DefineConstant(..)
// ...
// DefineFunction(..)
// DefineFunction(..)
// ...
// DefineProperty
// DefineProperty
//
// array (
//   'name'  => name of the property
//   'type'  => type of the property
//   'flags' => attributes of the property
//   'desc'  => description of the property
//   'note'  => additional note about this property's schema
// )
//
// EndClass()

