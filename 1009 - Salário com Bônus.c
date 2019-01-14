<!DOCTYPE html>
<!-- saved from url=(0060)https://www.urionlinejudge.com.br/judge/pt/runs/code/9401591 -->
<html lang="pt"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
                <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Submissão #9401591 - URI Online Judge</title>

        <link href="https://urionlinejudge.r.worldssl.net/judge/favicon.ico?1452205133" type="image/x-icon" rel="icon"><link href="https://urionlinejudge.r.worldssl.net/judge/favicon.ico?1452205133" type="image/x-icon" rel="shortcut icon">
        <meta name="description" content="URI Online Judge is a project developed for you! Our goal is to provide a platform where you can learn, practice and sharpen your skills in algorithms and programming languages.">
        <meta name="keywords" content="URI Online Judge, urionlinejudge, uri, online judge, judge, problems, contests">
        <meta name="revisit-after" content="1 days">
        <meta name="robots" content="index, nofollow">
        <meta name="theme-color" content="#FFFFFF">

        <link rel="manifest" href="https://www.urionlinejudge.com.br/judge/app/manifest.json">

        <link rel="preconnect" href="https://urionlinejudge.r.worldssl.net/">
        <link rel="preconnect" href="https://fonts.googleapis.com/">
        <link rel="preconnect" href="https://www.google-analytics.com/">

        
<meta property="fb:app_id" content="539776889439310">
<meta property="og:title" content="Submissão #9401591 - URI Online Judge">
<meta property="og:description" content="URI Online Judge is a project developed for you! Our goal is to provide a platform where you can learn, practice and sharpen your skills in algorithms and programming languages.">
<meta property="og:url" content="https://www.urionlinejudge.com.br/judge/pt/runs/code/9401591">
<meta property="og:image" content="https://www.urionlinejudge.com.br/judge/img/facebook/uri-online-judge-made-in-brasil.png">

    <meta property="og:type" content="website">

        <link href="https://plus.google.com/118420623550385726147" rel="publisher">
        <link href="./1009 - Salário com Bônus_files/css" rel="stylesheet" type="text/css">

        
	<link rel="stylesheet" href="./1009 - Salário com Bônus_files/default.css">

                        
        <script type="text/javascript" async="" src="./1009 - Salário com Bônus_files/linkid.js"></script><script async="" src="./1009 - Salário com Bônus_files/analytics.js"></script><script>
            (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
            (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
            m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
            })(window,document,'script','//www.google-analytics.com/analytics.js','ga');
            ga('create', 'UA-28047757-1', {'cookieDomain': 'urionlinejudge.com.br', 'siteSpeedSampleRate': 50});
            ga('require', 'linkid', 'linkid.js');
            ga('send', 'pageview');
        </script>
    <style type="text/css">  @-webkit-keyframes rotate {
    from  { -webkit-transform: rotate(0deg); }
    to   { -webkit-transform: rotate(360deg); }
  }

  @keyframes rotate {
    from  { transform: rotate(0deg); }
    to   { transform: rotate(360deg); }
  }

    .dropbox-dropin-btn, .dropbox-dropin-btn:link, .dropbox-dropin-btn:hover {
      display: inline-block;
      height: 14px;
      font-family: "Lucida Grande", "Segoe UI", "Tahoma", "Helvetica Neue", "Helvetica", sans-serif;
      font-size: 11px;
      font-weight: 600;
      color: #636363;
      text-decoration: none;
      padding: 1px 7px 5px 3px;
      border: 1px solid #ebebeb;
      border-radius: 2px;
      border-bottom-color: #d4d4d4;
        background: #fcfcfc;
  background: -moz-linear-gradient(top, #fcfcfc 0%, #f5f5f5 100%);
  background: -webkit-linear-gradient(top, #fcfcfc 0%, #f5f5f5 100%);
  background: linear-gradient(to bottom, #fcfcfc 0%, #f5f5f5 100%);
  filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#fcfcfc', endColorstr='#f5f5f5',GradientType=0);  
    }

    .dropbox-dropin-default:hover, .dropbox-dropin-error:hover {
      border-color: #dedede;
      border-bottom-color: #cacaca;
        background: #fdfdfd;
  background: -moz-linear-gradient(top, #fdfdfd 0%, #f5f5f5 100%);
  background: -webkit-linear-gradient(top, #fdfdfd 0%, #f5f5f5 100%);
  background: linear-gradient(to bottom, #fdfdfd 0%, #f5f5f5 100%);
  filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#fdfdfd', endColorstr='#f5f5f5',GradientType=0);  
    }

    .dropbox-dropin-default:active, .dropbox-dropin-error:active {
      border-color: #d1d1d1;
      box-shadow: inset 0 1px 1px rgba(0,0,0,0.1);
    }

    .dropbox-dropin-btn .dropin-btn-status {
      display: inline-block;
      width: 15px;
      height: 14px;
      vertical-align: bottom;
      margin: 0 5px 0 2px;
      background: transparent url('https://www.dropbox.com/static/images/widgets/dbx-saver-status.png') no-repeat;
      position: relative;
      top: 2px;
    }

    .dropbox-dropin-default .dropin-btn-status {
      background-position: 0px 0px;
    }

    .dropbox-dropin-progress .dropin-btn-status {
      width: 18px;
      margin: 0 4px 0 0;
      background: url('https://www.dropbox.com/static/images/widgets/dbx-progress.png') no-repeat center center;
        -webkit-animation-name: rotate;
        -webkit-animation-duration: 1.7s;
        -webkit-animation-iteration-count: infinite;
        -webkit-animation-timing-function: linear;
      animation-name: rotate;
      animation-duration: 1.7s;
      animation-iteration-count: infinite;
      animation-timing-function: linear;
    }

    .dropbox-dropin-success .dropin-btn-status {
      background-position: -15px 0px;
    }

    .dropbox-dropin-disabled {
      background: #e0e0e0;
      border: 1px #dadada solid;
      border-bottom: 1px solid #ccc;
      box-shadow: none;
    }

    .dropbox-dropin-disabled .dropin-btn-status {
      background-position: -30px 0px;
    }

    .dropbox-dropin-error .dropin-btn-status {
      background-position: -45px 0px;
    }

  @media only screen and (-webkit-min-device-pixel-ratio: 1.4) {
      .dropbox-dropin-btn .dropin-btn-status {
        background-image: url('https://www.dropbox.com/static/images/widgets/dbx-saver-status-2x.png');
        background-size: 60px 14px;
          -webkit-background-size: 60px 14px;
      }

      .dropbox-dropin-progress .dropin-btn-status {
        background: url('https://www.dropbox.com/static/images/widgets/dbx-progress-2x.png') no-repeat center center;
        background-size: 20px 20px;
          -webkit-background-size: 20px 20px;
      }
  }

    .dropbox-saver:hover, .dropbox-chooser:hover {
      text-decoration: none;
      cursor: pointer;
    }

    .dropbox-chooser, .dropbox-dropin-btn {
      line-height: 11px !important;
      text-decoration: none !important;
      box-sizing: content-box !important;
        -webkit-box-sizing: content-box !important;
        -moz-box-sizing: content-box !important;
    }
    </style><style id="ace_editor">.ace_editor {position: relative;overflow: hidden;font: 12px/normal 'Monaco', 'Menlo', 'Ubuntu Mono', 'Consolas', 'source-code-pro', monospace;direction: ltr;}.ace_scroller {position: absolute;overflow: hidden;top: 0;bottom: 0;background-color: inherit;-ms-user-select: none;-moz-user-select: none;-webkit-user-select: none;user-select: none;cursor: text;}.ace_content {position: absolute;-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;min-width: 100%;}.ace_dragging .ace_scroller:before{position: absolute;top: 0;left: 0;right: 0;bottom: 0;content: '';background: rgba(250, 250, 250, 0.01);z-index: 1000;}.ace_dragging.ace_dark .ace_scroller:before{background: rgba(0, 0, 0, 0.01);}.ace_selecting, .ace_selecting * {cursor: text !important;}.ace_gutter {position: absolute;overflow : hidden;width: auto;top: 0;bottom: 0;left: 0;cursor: default;z-index: 4;-ms-user-select: none;-moz-user-select: none;-webkit-user-select: none;user-select: none;}.ace_gutter-active-line {position: absolute;left: 0;right: 0;}.ace_scroller.ace_scroll-left {box-shadow: 17px 0 16px -16px rgba(0, 0, 0, 0.4) inset;}.ace_gutter-cell {padding-left: 19px;padding-right: 6px;background-repeat: no-repeat;}.ace_gutter-cell.ace_error {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAABOFBMVEX/////////QRswFAb/Ui4wFAYwFAYwFAaWGAfDRymzOSH/PxswFAb/SiUwFAYwFAbUPRvjQiDllog5HhHdRybsTi3/Tyv9Tir+Syj/UC3////XurebMBIwFAb/RSHbPx/gUzfdwL3kzMivKBAwFAbbvbnhPx66NhowFAYwFAaZJg8wFAaxKBDZurf/RB6mMxb/SCMwFAYwFAbxQB3+RB4wFAb/Qhy4Oh+4QifbNRcwFAYwFAYwFAb/QRzdNhgwFAYwFAbav7v/Uy7oaE68MBK5LxLewr/r2NXewLswFAaxJw4wFAbkPRy2PyYwFAaxKhLm1tMwFAazPiQwFAaUGAb/QBrfOx3bvrv/VC/maE4wFAbRPBq6MRO8Qynew8Dp2tjfwb0wFAbx6eju5+by6uns4uH9/f36+vr/GkHjAAAAYnRSTlMAGt+64rnWu/bo8eAA4InH3+DwoN7j4eLi4xP99Nfg4+b+/u9B/eDs1MD1mO7+4PHg2MXa347g7vDizMLN4eG+Pv7i5evs/v79yu7S3/DV7/498Yv24eH+4ufQ3Ozu/v7+y13sRqwAAADLSURBVHjaZc/XDsFgGIBhtDrshlitmk2IrbHFqL2pvXf/+78DPokj7+Fz9qpU/9UXJIlhmPaTaQ6QPaz0mm+5gwkgovcV6GZzd5JtCQwgsxoHOvJO15kleRLAnMgHFIESUEPmawB9ngmelTtipwwfASilxOLyiV5UVUyVAfbG0cCPHig+GBkzAENHS0AstVF6bacZIOzgLmxsHbt2OecNgJC83JERmePUYq8ARGkJx6XtFsdddBQgZE2nPR6CICZhawjA4Fb/chv+399kfR+MMMDGOQAAAABJRU5ErkJggg==");background-repeat: no-repeat;background-position: 2px center;}.ace_gutter-cell.ace_warning {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAAAmVBMVEX///8AAAD///8AAAAAAABPSzb/5sAAAAB/blH/73z/ulkAAAAAAAD85pkAAAAAAAACAgP/vGz/rkDerGbGrV7/pkQICAf////e0IsAAAD/oED/qTvhrnUAAAD/yHD/njcAAADuv2r/nz//oTj/p064oGf/zHAAAAA9Nir/tFIAAAD/tlTiuWf/tkIAAACynXEAAAAAAAAtIRW7zBpBAAAAM3RSTlMAABR1m7RXO8Ln31Z36zT+neXe5OzooRDfn+TZ4p3h2hTf4t3k3ucyrN1K5+Xaks52Sfs9CXgrAAAAjklEQVR42o3PbQ+CIBQFYEwboPhSYgoYunIqqLn6/z8uYdH8Vmdnu9vz4WwXgN/xTPRD2+sgOcZjsge/whXZgUaYYvT8QnuJaUrjrHUQreGczuEafQCO/SJTufTbroWsPgsllVhq3wJEk2jUSzX3CUEDJC84707djRc5MTAQxoLgupWRwW6UB5fS++NV8AbOZgnsC7BpEAAAAABJRU5ErkJggg==");background-position: 2px center;}.ace_gutter-cell.ace_info {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAAAAAA6mKC9AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAAJ0Uk5TAAB2k804AAAAPklEQVQY02NgIB68QuO3tiLznjAwpKTgNyDbMegwisCHZUETUZV0ZqOquBpXj2rtnpSJT1AEnnRmL2OgGgAAIKkRQap2htgAAAAASUVORK5CYII=");background-position: 2px center;}.ace_dark .ace_gutter-cell.ace_info {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQBAMAAADt3eJSAAAAJFBMVEUAAAChoaGAgIAqKiq+vr6tra1ZWVmUlJSbm5s8PDxubm56enrdgzg3AAAAAXRSTlMAQObYZgAAAClJREFUeNpjYMAPdsMYHegyJZFQBlsUlMFVCWUYKkAZMxZAGdxlDMQBAG+TBP4B6RyJAAAAAElFTkSuQmCC");}.ace_scrollbar {position: absolute;right: 0;bottom: 0;z-index: 6;}.ace_scrollbar-inner {position: absolute;cursor: text;left: 0;top: 0;}.ace_scrollbar-v{overflow-x: hidden;overflow-y: scroll;top: 0;}.ace_scrollbar-h {overflow-x: scroll;overflow-y: hidden;left: 0;}.ace_print-margin {position: absolute;height: 100%;}.ace_text-input {position: absolute;z-index: 0;width: 0.5em;height: 1em;opacity: 0;background: transparent;-moz-appearance: none;appearance: none;border: none;resize: none;outline: none;overflow: hidden;font: inherit;padding: 0 1px;margin: 0 -1px;text-indent: -1em;-ms-user-select: text;-moz-user-select: text;-webkit-user-select: text;user-select: text;}.ace_text-input.ace_composition {background: inherit;color: inherit;z-index: 1000;opacity: 1;text-indent: 0;}.ace_layer {z-index: 1;position: absolute;overflow: hidden;white-space: pre;height: 100%;width: 100%;-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;pointer-events: none;}.ace_gutter-layer {position: relative;width: auto;text-align: right;pointer-events: auto;}.ace_text-layer {font: inherit !important;}.ace_cjk {display: inline-block;text-align: center;}.ace_cursor-layer {z-index: 4;}.ace_cursor {z-index: 4;position: absolute;-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;border-left: 2px solid}.ace_slim-cursors .ace_cursor {border-left-width: 1px;}.ace_overwrite-cursors .ace_cursor {border-left-width: 0;border-bottom: 1px solid;}.ace_hidden-cursors .ace_cursor {opacity: 0.2;}.ace_smooth-blinking .ace_cursor {-webkit-transition: opacity 0.18s;transition: opacity 0.18s;}.ace_editor.ace_multiselect .ace_cursor {border-left-width: 1px;}.ace_marker-layer .ace_step, .ace_marker-layer .ace_stack {position: absolute;z-index: 3;}.ace_marker-layer .ace_selection {position: absolute;z-index: 5;}.ace_marker-layer .ace_bracket {position: absolute;z-index: 6;}.ace_marker-layer .ace_active-line {position: absolute;z-index: 2;}.ace_marker-layer .ace_selected-word {position: absolute;z-index: 4;-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;}.ace_line .ace_fold {-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;display: inline-block;height: 11px;margin-top: -2px;vertical-align: middle;background-image:url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABEAAAAJCAYAAADU6McMAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAJpJREFUeNpi/P//PwOlgAXGYGRklAVSokD8GmjwY1wasKljQpYACtpCFeADcHVQfQyMQAwzwAZI3wJKvCLkfKBaMSClBlR7BOQikCFGQEErIH0VqkabiGCAqwUadAzZJRxQr/0gwiXIal8zQQPnNVTgJ1TdawL0T5gBIP1MUJNhBv2HKoQHHjqNrA4WO4zY0glyNKLT2KIfIMAAQsdgGiXvgnYAAAAASUVORK5CYII="),url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAA3CAYAAADNNiA5AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAACJJREFUeNpi+P//fxgTAwPDBxDxD078RSX+YeEyDFMCIMAAI3INmXiwf2YAAAAASUVORK5CYII=");background-repeat: no-repeat, repeat-x;background-position: center center, top left;color: transparent;border: 1px solid black;border-radius: 2px;cursor: pointer;pointer-events: auto;}.ace_dark .ace_fold {}.ace_fold:hover{background-image:url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABEAAAAJCAYAAADU6McMAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAJpJREFUeNpi/P//PwOlgAXGYGRklAVSokD8GmjwY1wasKljQpYACtpCFeADcHVQfQyMQAwzwAZI3wJKvCLkfKBaMSClBlR7BOQikCFGQEErIH0VqkabiGCAqwUadAzZJRxQr/0gwiXIal8zQQPnNVTgJ1TdawL0T5gBIP1MUJNhBv2HKoQHHjqNrA4WO4zY0glyNKLT2KIfIMAAQsdgGiXvgnYAAAAASUVORK5CYII="),url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAA3CAYAAADNNiA5AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAACBJREFUeNpi+P//fz4TAwPDZxDxD5X4i5fLMEwJgAADAEPVDbjNw87ZAAAAAElFTkSuQmCC");}.ace_tooltip {background-color: #FFF;background-image: -webkit-linear-gradient(top, transparent, rgba(0, 0, 0, 0.1));background-image: linear-gradient(to bottom, transparent, rgba(0, 0, 0, 0.1));border: 1px solid gray;border-radius: 1px;box-shadow: 0 1px 2px rgba(0, 0, 0, 0.3);color: black;max-width: 100%;padding: 3px 4px;position: fixed;z-index: 999999;-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;cursor: default;white-space: pre;word-wrap: break-word;line-height: normal;font-style: normal;font-weight: normal;letter-spacing: normal;pointer-events: none;}.ace_folding-enabled > .ace_gutter-cell {padding-right: 13px;}.ace_fold-widget {-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;margin: 0 -12px 0 1px;display: none;width: 11px;vertical-align: top;background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAANElEQVR42mWKsQ0AMAzC8ixLlrzQjzmBiEjp0A6WwBCSPgKAXoLkqSot7nN3yMwR7pZ32NzpKkVoDBUxKAAAAABJRU5ErkJggg==");background-repeat: no-repeat;background-position: center;border-radius: 3px;border: 1px solid transparent;cursor: pointer;}.ace_folding-enabled .ace_fold-widget {display: inline-block;   }.ace_fold-widget.ace_end {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAANElEQVR42m3HwQkAMAhD0YzsRchFKI7sAikeWkrxwScEB0nh5e7KTPWimZki4tYfVbX+MNl4pyZXejUO1QAAAABJRU5ErkJggg==");}.ace_fold-widget.ace_closed {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAMAAAAGCAYAAAAG5SQMAAAAOUlEQVR42jXKwQkAMAgDwKwqKD4EwQ26sSOkVWjgIIHAzPiCgaqiqnJHZnKICBERHN194O5b9vbLuAVRL+l0YWnZAAAAAElFTkSuQmCCXA==");}.ace_fold-widget:hover {border: 1px solid rgba(0, 0, 0, 0.3);background-color: rgba(255, 255, 255, 0.2);box-shadow: 0 1px 1px rgba(255, 255, 255, 0.7);}.ace_fold-widget:active {border: 1px solid rgba(0, 0, 0, 0.4);background-color: rgba(0, 0, 0, 0.05);box-shadow: 0 1px 1px rgba(255, 255, 255, 0.8);}.ace_dark .ace_fold-widget {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAAHklEQVQIW2P4//8/AzoGEQ7oGCaLLAhWiSwB146BAQCSTPYocqT0AAAAAElFTkSuQmCC");}.ace_dark .ace_fold-widget.ace_end {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAAH0lEQVQIW2P4//8/AxQ7wNjIAjDMgC4AxjCVKBirIAAF0kz2rlhxpAAAAABJRU5ErkJggg==");}.ace_dark .ace_fold-widget.ace_closed {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAMAAAAFCAYAAACAcVaiAAAAHElEQVQIW2P4//+/AxAzgDADlOOAznHAKgPWAwARji8UIDTfQQAAAABJRU5ErkJggg==");}.ace_dark .ace_fold-widget:hover {box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);background-color: rgba(255, 255, 255, 0.1);}.ace_dark .ace_fold-widget:active {box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);}.ace_fold-widget.ace_invalid {background-color: #FFB4B4;border-color: #DE5555;}.ace_fade-fold-widgets .ace_fold-widget {-webkit-transition: opacity 0.4s ease 0.05s;transition: opacity 0.4s ease 0.05s;opacity: 0;}.ace_fade-fold-widgets:hover .ace_fold-widget {-webkit-transition: opacity 0.05s ease 0.05s;transition: opacity 0.05s ease 0.05s;opacity:1;}.ace_underline {text-decoration: underline;}.ace_bold {font-weight: bold;}.ace_nobold .ace_bold {font-weight: normal;}.ace_italic {font-style: italic;}.ace_error-marker {background-color: rgba(255, 0, 0,0.2);position: absolute;z-index: 9;}.ace_highlight-marker {background-color: rgba(255, 255, 0,0.2);position: absolute;z-index: 8;}</style><style id="ace-tm">.ace-tm .ace_gutter {background: #f0f0f0;color: #333;}.ace-tm .ace_print-margin {width: 1px;background: #e8e8e8;}.ace-tm .ace_fold {background-color: #6B72E6;}.ace-tm {background-color: #FFFFFF;color: black;}.ace-tm .ace_cursor {color: black;}.ace-tm .ace_invisible {color: rgb(191, 191, 191);}.ace-tm .ace_storage,.ace-tm .ace_keyword {color: blue;}.ace-tm .ace_constant {color: rgb(197, 6, 11);}.ace-tm .ace_constant.ace_buildin {color: rgb(88, 72, 246);}.ace-tm .ace_constant.ace_language {color: rgb(88, 92, 246);}.ace-tm .ace_constant.ace_library {color: rgb(6, 150, 14);}.ace-tm .ace_invalid {background-color: rgba(255, 0, 0, 0.1);color: red;}.ace-tm .ace_support.ace_function {color: rgb(60, 76, 114);}.ace-tm .ace_support.ace_constant {color: rgb(6, 150, 14);}.ace-tm .ace_support.ace_type,.ace-tm .ace_support.ace_class {color: rgb(109, 121, 222);}.ace-tm .ace_keyword.ace_operator {color: rgb(104, 118, 135);}.ace-tm .ace_string {color: rgb(3, 106, 7);}.ace-tm .ace_comment {color: rgb(76, 136, 107);}.ace-tm .ace_comment.ace_doc {color: rgb(0, 102, 255);}.ace-tm .ace_comment.ace_doc.ace_tag {color: rgb(128, 159, 191);}.ace-tm .ace_constant.ace_numeric {color: rgb(0, 0, 205);}.ace-tm .ace_variable {color: rgb(49, 132, 149);}.ace-tm .ace_xml-pe {color: rgb(104, 104, 91);}.ace-tm .ace_entity.ace_name.ace_function {color: #0000A2;}.ace-tm .ace_heading {color: rgb(12, 7, 255);}.ace-tm .ace_list {color:rgb(185, 6, 144);}.ace-tm .ace_meta.ace_tag {color:rgb(0, 22, 142);}.ace-tm .ace_string.ace_regex {color: rgb(255, 0, 0)}.ace-tm .ace_marker-layer .ace_selection {background: rgb(181, 213, 255);}.ace-tm.ace_multiselect .ace_selection.ace_start {box-shadow: 0 0 3px 0px white;border-radius: 2px;}.ace-tm .ace_marker-layer .ace_step {background: rgb(252, 255, 0);}.ace-tm .ace_marker-layer .ace_stack {background: rgb(164, 229, 101);}.ace-tm .ace_marker-layer .ace_bracket {margin: -1px 0 0 -1px;border: 1px solid rgb(192, 192, 192);}.ace-tm .ace_marker-layer .ace_active-line {background: rgba(0, 0, 0, 0.07);}.ace-tm .ace_gutter-active-line {background-color : #dcdcdc;}.ace-tm .ace_marker-layer .ace_selected-word {background: rgb(250, 250, 255);border: 1px solid rgb(200, 200, 250);}.ace-tm .ace_indent-guide {background: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAAE0lEQVQImWP4////f4bLly//BwAmVgd1/w11/gAAAABJRU5ErkJggg==") right repeat-y;}</style><style>    .error_widget_wrapper {        background: inherit;        color: inherit;        border:none    }    .error_widget {        border-top: solid 2px;        border-bottom: solid 2px;        margin: 5px 0;        padding: 10px 40px;        white-space: pre-wrap;    }    .error_widget.ace_error, .error_widget_arrow.ace_error{        border-color: #ff5a5a    }    .error_widget.ace_warning, .error_widget_arrow.ace_warning{        border-color: #F1D817    }    .error_widget.ace_info, .error_widget_arrow.ace_info{        border-color: #5a5a5a    }    .error_widget.ace_ok, .error_widget_arrow.ace_ok{        border-color: #5aaa5a    }    .error_widget_arrow {        position: absolute;        border: solid 5px;        border-top-color: transparent!important;        border-right-color: transparent!important;        border-left-color: transparent!important;        top: -5px;    }</style><script src="./1009 - Salário com Bônus_files/theme-urionlinejudge.js"></script><script src="./1009 - Salário com Bônus_files/mode-c_cpp.js"></script><style id="ace-urionlinejudge">.ace-urionlinejudge {  font-family: Consolas, 'Liberation Mono', Menlo, Courier, monospace;  font-size: 12px;  line-height: 16px;}.ace-urionlinejudge .ace_editor {  border: 2px solid rgb(159, 159, 159);}.ace-urionlinejudge .ace_editor.ace_focus {  border: 2px solid #327fbd;}.ace-urionlinejudge .ace_gutter {  background: #efefef;  border-right:#bbb solid 1px;  color: #333;}.ace-urionlinejudge .ace_print_margin {  width: 1px;  background: #e8e8e8;}.ace-urionlinejudge .ace_scroller {  background-color: #FFFFFF;}.ace-urionlinejudge .ace_text-layer {  cursor: text;  color: #4D4D4C;}.ace-urionlinejudge .ace_cursor {  border-left: 2px solid #AEAFAD;}.ace-urionlinejudge .ace_cursor.ace_overwrite {  border-left: 0px;  border-bottom: 1px solid #AEAFAD;} .ace-urionlinejudge .ace_marker-layer .ace_selection {  background: #D6D6D6;}.ace-urionlinejudge .ace_marker-layer .ace_step {  background: rgb(198, 219, 174);}.ace-urionlinejudge .ace_marker-layer .ace_bracket {  margin: -1px 0 0 -1px;  border: 1px solid #D1D1D1;}.ace-urionlinejudge .ace_marker-layer .ace_active_line {  background: #EFEFEF;}.ace-urionlinejudge .ace_marker-layer .ace_selected_word {  border: 1px solid #D6D6D6;}       .ace-urionlinejudge .ace_invisible {  color: #D1D1D1;}.ace-urionlinejudge .ace_keyword {  color:#8959A8;}.ace-urionlinejudge .ace_keyword.ace_operator {  color:#3E999F;}.ace-urionlinejudge .ace_constant.ace_language {  color:#F5871F;}.ace-urionlinejudge .ace_constant.ace_numeric {  color:#F5871F;}.ace-urionlinejudge .ace_invalid {  color:#FFFFFF;background-color:#C82829;}.ace-urionlinejudge .ace_invalid.ace_deprecated {  color:#FFFFFF;background-color:#8959A8;}.ace-urionlinejudge .ace_fold {    background-color: #4271AE;    border-color: #4D4D4C;}.ace-urionlinejudge .ace_support.ace_function {  color:#4271AE;}.ace-urionlinejudge .ace_string {  color:#718C00;}.ace-urionlinejudge .ace_string.ace_regexp {  color:#C82829;}.ace-urionlinejudge .ace_comment {  color:#8E908C;}.ace-urionlinejudge .ace_variable {  color:#C82829;}.ace-urionlinejudge .ace_meta.ace_tag {  color:#C82829;}.ace-urionlinejudge .ace_entity.ace_other.ace_attribute-name {  color:#C82829;}.ace-urionlinejudge .ace_entity.ace_name.ace_function {  color:#4271AE;}.ace-urionlinejudge .ace_markup.ace_underline {    text-decoration:underline;}.ace-urionlinejudge .ace_markup.ace_heading {  color:#718C00;}</style></head>
    <body class="website-mode" style="">
        <div id="container">
            
<header class="ribbon christmas-header-ribbon">
    
    <div class="content">
        <div class="h-small">
            <div class="h-avatar animated rubberBand" style="background-image: url(&#39;https://www.gravatar.com/avatar/c5ea75e4e6dc94c1dfc4f90315513ead?s=32&amp;d=robohash&amp;r=g&#39;)">
        
                <ul class="h-avatar-menu">
                    <li>
                        <a href="https://www.urionlinejudge.com.br/judge/pt/profile/198637">Perfil</a>                    </li>
                    <li>
                        <a href="https://www.urionlinejudge.com.br/judge/pt/account">Configurações</a>                    </li>
                    <li>
                        <a href="https://www.urionlinejudge.com.br/judge/pt/feedbacks/add">Feedbacks</a>                    </li>
                    <li>
                        <a href="https://www.urionlinejudge.com.br/judge/pt/faqs/about">FAQs</a>                    </li>
                    <li>
                        <hr>
                    </li>
                    <li>
                        <a href="https://www.urionlinejudge.com.br/judge/pt/logout">Sair</a>                    </li>
                </ul>
            </div>
            
            <div class="h-user">
                <strong>Hi,</strong> Thiago Soares Mota<br>
                <i>thiagomota456@gmail.com</i>
            </div>
        </div>
        
        <div class="h-large">

            <ul id="menu">
                <li>
                    <a href="https://www.urionlinejudge.com.br/judge/pt">Home</a>                </li>
                <li>
                    <a href="https://www.urionlinejudge.com.br/judge/pt/profile/198637">Perfil</a>
                    
                    <ul class="h-sub-menu">
                        <li>
                            <a href="https://www.urionlinejudge.com.br/judge/pt/account">Configurações</a>                        </li>
                        <li>
                            <hr>
                        </li>
                        <li>
                        <a href="https://www.urionlinejudge.com.br/judge/pt/users/statistics/198637">Estatísticas</a>                        </li>
                        <li>
                            <a href="https://www.urionlinejudge.com.br/judge/pt/users/friends/198637">Amigos</a>                        </li>
                        <li>
                            <a href="https://www.urionlinejudge.com.br/judge/pt/friends/invitations">Convites</a>                        </li>
                    </ul>
                </li>
                <li>
                    <a href="https://www.urionlinejudge.com.br/judge/pt/news">News</a>                </li>
                <li>
                    <a href="https://www.urionlinejudge.com.br/judge/pt/disciplines">Academic</a>                </li>
                <li>
                    <a href="https://www.urionlinejudge.com.br/judge/pt/contests">Contests</a>
                    <ul class="h-sub-menu">
                        <li>
                            <a href="https://www.urionlinejudge.com.br/judge/pt/contests">Contests</a>                        </li>
                        <li>
                            <hr>
                        </li>
                        <li>
                            <a href="https://www.urionlinejudge.com.br/judge/pt/teams">Times</a>                        </li>
                        <li>
                            <a href="https://www.urionlinejudge.com.br/judge/pt/tournaments">Torneios</a>                        </li>
                    </ul>
                </li>
                <li>
                    <a href="https://www.urionlinejudge.com.br/judge/pt/forum">Fórum</a>
                    <ul class="h-sub-menu">
                        <li>
                        <a href="https://www.urionlinejudge.com.br/judge/pt/questions/latest">Novos</a>                        </li>
                        <li>
                            <hr>
                        </li>
                        <li>
                        <a href="https://www.urionlinejudge.com.br/judge/pt/questions/user/198637">Meus Tópicos</a>                        </li>
                        <li>
                        <a href="https://www.urionlinejudge.com.br/judge/pt/users/occurrences">Ocorrências</a>                        </li>
                                            </ul>
                </li>
                <li>
                    <a href="https://www.urionlinejudge.com.br/judge/pt/categories">Problemas</a>
                    <ul class="h-sub-menu">
                        <li>
                            <a href="https://www.urionlinejudge.com.br/judge/pt/search">Buscar</a>                        </li>
                        <li>
                            <hr>
                        </li>
                        <li>
                            <a href="https://www.urionlinejudge.com.br/judge/pt/problems/index/1">Iniciante</a>                        </li>
                        <li>
                            <a href="https://www.urionlinejudge.com.br/judge/pt/problems/index/2">Ad-Hoc</a>                        </li>
                        <li>
                            <a href="https://www.urionlinejudge.com.br/judge/pt/problems/index/3">Strings</a>                        </li>
                        <li>
                            <a href="https://www.urionlinejudge.com.br/judge/pt/problems/index/4">Estruturas</a>                        </li>
                        <li>
                            <a href="https://www.urionlinejudge.com.br/judge/pt/problems/index/5">Matemática</a>                        </li>
                        <li>
                            <a href="https://www.urionlinejudge.com.br/judge/pt/problems/index/6">Paradigmas</a>                        </li>
                        <li>
                            <a href="https://www.urionlinejudge.com.br/judge/pt/problems/index/7">Grafos</a>                        </li>
                        <li>
                            <a href="https://www.urionlinejudge.com.br/judge/pt/problems/index/8">Geometria</a>                        </li>
                        <li>
                            <hr>
                        </li>
                        <li>
                            <a href="https://www.urionlinejudge.com.br/judge/pt/problems/index/9">SQL</a>                        </li>
                    </ul>
                </li>
                <li>
                    <a href="https://www.urionlinejudge.com.br/judge/pt/runs">Submissões</a>
                    <ul class="h-sub-menu">
                        <li>
                            <a href="https://www.urionlinejudge.com.br/judge/pt/runs">Todas</a>                        </li>
                        <li>
                            <a href="https://www.urionlinejudge.com.br/judge/pt/runs/add">Enviar</a>                        </li>
                        <li>
                            <a href="https://www.urionlinejudge.com.br/judge/pt/runs/live">Ao Vivo</a>                        </li>
                        <li>
                            <a href="https://www.urionlinejudge.com.br/judge/pt/drafts">Rascunhos</a>                        </li>
                        <li>
                            <hr>
                        </li>
                        <li>
                            <a href="https://www.urionlinejudge.com.br/judge/pt/faqs/about">FAQs</a>                        </li>
                        <li>
                            <a href="https://www.urionlinejudge.com.br/judge/pt/answers">Respostas</a>                        </li>
                    </ul>
                </li>
                <li>
                    <a href="https://www.urionlinejudge.com.br/judge/pt/rank">Ranks</a>
                    <ul class="h-sub-menu">
                        <li>
                            <a href="https://www.urionlinejudge.com.br/judge/pt/rank">RANK PRINCIPAL</a>                        </li>
                        <li>
                            <a href="https://www.urionlinejudge.com.br/judge/pt/universities">Universidades</a>                        </li>
                        <li>
                            <a href="https://www.urionlinejudge.com.br/judge/pt/countries">Países</a>                        </li>
                    </ul>
                </li>
                <li>
                    <a href="https://www.urionlinejudge.com.br/judge/pt/logout">Sair</a>                </li>
            </ul> 
        </div> 
    </div>

    </header>

            
            <div class="content page">
                
<div id="side-bar">
    <div id="logo">
    <a href="https://www.urionlinejudge.com.br/judge/pt"><img src="./1009 - Salário com Bônus_files/logo.130615.png" alt="URI Online Judge" title="URI Online Judge" height="94" width="162"></a></div>
<ul class="v-menu">
    <li class="m-live" style="cursor: pointer;">
        <a href="https://www.urionlinejudge.com.br/judge/pt/runs/live">AO VIVO</a>
        <p>
            O que os outros estão resolvendo.        </p>
    </li>
    <li class="m-submissions" style="cursor: pointer;">
        <a href="https://www.urionlinejudge.com.br/judge/pt/runs">LISTAR</a>
        <p>
            Liste todas as suas submissões.        </p>
    </li>
        <li class="m-drafts" style="cursor: pointer;">
        <a href="https://www.urionlinejudge.com.br/judge/pt/drafts">RASCUNHOS</a>
        <p>
            Liste todos os seus rascunhos.        </p>
    </li>
        <li class="m-tried" style="cursor: pointer;">
        <a href="https://www.urionlinejudge.com.br/judge/pt/tried">TENTADO</a>
        <p>
            Problemas ainda não resolvidos.        </p>
    </li>
        <li class="m-help tour-step-help" style="cursor: pointer;">
        <a href="https://www.urionlinejudge.com.br/judge/pt/faqs/about/judge">FAQs</a>
        <p>
            Precisa de ajuda?        </p>
    </li>
    <li class="m-answers" style="cursor: pointer;">
        <a href="https://www.urionlinejudge.com.br/judge/pt/answers">RESPOSTAS</a>
        <p>
            O que isso significa?        </p>
    </li>
    <li class="m-forum" style="cursor: pointer;">
        <a href="https://www.urionlinejudge.com.br/judge/pt/questions/latest">FÓRUM</a>
        <p>
            Busque por ajuda no Fórum.        </p>
    </li>
</ul>
</div>

<div class="main-content">

    <div id="page-name" class="pn-code">
        <h1>CÓDIGO FONTE</h1>
        <p>Visualize o código fonte de suas submissões, junto com alguns detalhes extras.</p>
    </div>
    
    <div class="st-big-box" id="information-code">
        <h3>SUBMISSÃO # 9401591</h3>
        
        <dl>
            <dt>Problema:</dt>
            <dd>
                <a href="https://www.urionlinejudge.com.br/judge/pt/problems/view/1009" target="_blank">1009 - Salário com Bônus</a>            </dd>
            <dt>Resposta:</dt>
            <dd>
                <span class="answer a-1">
                Accepted                </span>
            </dd>
            <dt>Linguagem:</dt>
            <dd>
                C (gcc  4.8.5, -O2 -lm) [+0s]            </dd>
            <dt>Tempo:</dt>
            <dd>
                0.000s 
            </dd>
            <dt>Tamanho:</dt>
            <dd>
                272 Bytes            </dd>
                        <dt>Submissão:</dt>
            <dd>
                07/03/18 08:38:31            </dd>
        </dl>  
    </div>
    
    <div class="st-small-box" id="dropbox">
        <h3>DROPBOX</h3>
        
                <a href="http://www.urionlinejudge.com.br/judge/runs/dropbox/9401591/76451b6444d1425f9c792306f8b6caad" class="dropbox-saver dropbox-dropin-btn dropbox-dropin-default" data-filename="URI_1009 - (9401591) - Accepted.c"><span class="dropin-btn-status"></span>Save to Dropbox</a>
    </div>
    
    <div class="both"></div>

    
    
    
    
    
    <div class="st-box" id="source-code">
        <h3>CÓDIGO FONTE</h3>
        
        <div class="wrap code-answer-1">
        
            <pre id="code" class="code-1 ace_editor ace-urionlinejudge" style="opacity: 1;"><textarea class="ace_text-input" wrap="off" autocapitalize="off" spellcheck="false" style="height: 16px; left: 60.2013px; top: 240px; width: 7.20125px;"></textarea><div class="ace_gutter"><div class="ace_layer ace_gutter-layer ace_folding-enabled" style="margin-top: 0px; height: 512px; width: 48px;"><div class="ace_gutter-cell " style="height: 16px;">1</div><div class="ace_gutter-cell " style="height: 16px;">2</div><div class="ace_gutter-cell " style="height: 16px;">3<span class="ace_fold-widget ace_start ace_open" style="height: 16px;"></span></div><div class="ace_gutter-cell " style="height: 16px;">4</div><div class="ace_gutter-cell " style="height: 16px;">5</div><div class="ace_gutter-cell " style="height: 16px;">6</div><div class="ace_gutter-cell " style="height: 16px;">7</div><div class="ace_gutter-cell " style="height: 16px;">8</div><div class="ace_gutter-cell " style="height: 16px;">9</div><div class="ace_gutter-cell " style="height: 16px;">10</div><div class="ace_gutter-cell " style="height: 16px;">11</div><div class="ace_gutter-cell " style="height: 16px;">12</div><div class="ace_gutter-cell " style="height: 16px;">13</div><div class="ace_gutter-cell " style="height: 16px;">14</div><div class="ace_gutter-cell " style="height: 16px;">15</div><div class="ace_gutter-cell " style="height: 16px;">16</div></div><div class="ace_gutter-active-line" style="top: 240px; height: 16px;"></div></div><div class="ace_scroller" style="left: 49px; right: 0px; bottom: 0px; cursor: default;"><div class="ace_content" style="margin-top: 0px; width: 671px; height: 512px; margin-left: 0px;"><div class="ace_layer ace_print-margin-layer"><div class="ace_print-margin" style="left: 580.1px; visibility: visible;"></div></div><div class="ace_layer ace_marker-layer"><div class="ace_selection ace_start" style="height:16px;right:0;top:0px;left:4px;"></div><div class="ace_selection" style="height:16px;width:7.20125px;top:240px;left:4px;"></div><div class="ace_selection" style="height:224px;right:0;top:16px;left:4px;"></div><div class="ace_bracket ace_start" style="height:16px;width:7.20125px;top:32px;left:83.21375px;"></div></div><div class="ace_layer ace_text-layer" style="padding: 0px 4px;"><div class="ace_line" style="height:16px"><span class="ace_keyword">#include</span><span class="ace_constant ace_other">&lt;stdio.h&gt;</span></div><div class="ace_line" style="height:16px"></div><div class="ace_line" style="height:16px"><span class="ace_storage ace_type">void</span>&nbsp;<span class="ace_identifier">main</span><span class="ace_paren ace_lparen">(</span><span class="ace_paren ace_rparen">)</span><span class="ace_paren ace_lparen">{</span></div><div class="ace_line" style="height:16px"></div><div class="ace_line" style="height:16px">&nbsp;<span class="ace_storage ace_type">char</span>&nbsp;<span class="ace_identifier">nome</span><span class="ace_paren ace_lparen">[</span><span class="ace_constant ace_numeric">100</span><span class="ace_paren ace_rparen">]</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height:16px"></div><div class="ace_line" style="height:16px">&nbsp;<span class="ace_storage ace_type">double</span>&nbsp;<span class="ace_identifier">salario_fixo</span><span class="ace_punctuation ace_operator">,</span>&nbsp;<span class="ace_identifier">montante_de_vendas</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height:16px"></div><div class="ace_line" style="height:16px">&nbsp;<span class="ace_support ace_function ace_C99 ace_c">gets</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">nome</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height:16px"></div><div class="ace_line" style="height:16px">&nbsp;<span class="ace_support ace_function ace_C99 ace_c">scanf</span><span class="ace_paren ace_lparen">(</span><span class="ace_string">"&nbsp;%lf"</span><span class="ace_punctuation ace_operator">,</span><span class="ace_keyword ace_operator">&amp;</span><span class="ace_identifier">salario_fixo</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height:16px">&nbsp;<span class="ace_support ace_function ace_C99 ace_c">scanf</span><span class="ace_paren ace_lparen">(</span><span class="ace_string">"&nbsp;%lf"</span><span class="ace_punctuation ace_operator">,</span><span class="ace_keyword ace_operator">&amp;</span><span class="ace_identifier">montante_de_vendas</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height:16px"></div><div class="ace_line" style="height:16px">&nbsp;<span class="ace_support ace_function ace_C99 ace_c">printf</span><span class="ace_paren ace_lparen">(</span><span class="ace_string">"TOTAL&nbsp;=&nbsp;R$&nbsp;%.2lf\n"</span><span class="ace_punctuation ace_operator">,</span>&nbsp;<span class="ace_paren ace_lparen">(</span><span class="ace_identifier">salario_fixo</span>&nbsp;<span class="ace_keyword ace_operator">+</span>&nbsp;<span class="ace_paren ace_lparen">(</span><span class="ace_identifier">montante_de_vendas</span>&nbsp;<span class="ace_keyword ace_operator">*</span>&nbsp;<span class="ace_constant ace_numeric">0.15</span><span class="ace_paren ace_rparen">)</span>&nbsp;<span class="ace_paren ace_rparen">)</span>&nbsp;<span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height:16px">&nbsp;</div><div class="ace_line" style="height:16px"><span class="ace_paren ace_rparen">}</span></div></div><div class="ace_layer ace_marker-layer"></div><div class="ace_layer ace_cursor-layer ace_hidden-cursors"><div class="ace_cursor" style="left: 11.2012px; top: 240px; width: 7.20125px; height: 16px;"></div></div></div></div><div class="ace_scrollbar ace_scrollbar-v" style="display: none; width: 20px; bottom: 0px;"><div class="ace_scrollbar-inner" style="width: 20px; height: 256px;"></div></div><div class="ace_scrollbar ace_scrollbar-h" style="display: none; height: 20px; left: 49px; right: 0px;"><div class="ace_scrollbar-inner" style="height: 20px; width: 673px;"></div></div><div style="height: auto; width: auto; top: -100px; left: -100px; visibility: hidden; position: fixed; white-space: pre; font: inherit; overflow: hidden;"><div style="height: auto; width: auto; top: -100px; left: -100px; visibility: hidden; position: fixed; white-space: pre; font: inherit; overflow: visible;"></div><div style="height: auto; width: auto; top: -100px; left: -100px; visibility: hidden; position: fixed; white-space: pre; font-style: inherit; font-variant: inherit; font-stretch: inherit; font-size: inherit; line-height: inherit; font-family: inherit; overflow: visible;">XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX</div></div></pre>

        </div>
    </div>

        
</div>

<script type="text/javascript">
var answer_id = 1;
var highlight = [];
var messages = {};
</script>


                <div class="both"></div>
            </div>

            <footer class="ribbon christmas-footer-ribbon">
    <div class="footer-content">

        <div class="site-coyright">© 2011 - 2018 URI Online Judge</div>
        
        <ul class="site-information">
            <li>
                <a href="https://www.urionlinejudge.com.br/judge/pt/cookies">Cookies</a>            </li>
            <li class="division">|</li>
            <li>
                <a href="https://www.urionlinejudge.com.br/judge/pt/privacy">Privacidade</a>            </li>
            <li class="division">|</li>
            <li>
                <a href="https://www.urionlinejudge.com.br/judge/pt/terms-and-conditions">Termos &amp; Condições</a>            </li>
            <li class="division">|</li>
            <li>
                <a href="https://www.urionlinejudge.com.br/judge/pt/faqs/about/judge">FAQs</a>            </li>
            <li class="division">|</li>
            <li>
                <a href="http://status.urionlinejudge.com.br/" target="_blank" rel="noopener">Status</a>            </li>
            <li class="division">|</li>
            <li>
                <a href="https://www.urionlinejudge.com.br/judge/pt/credits">Créditos</a>            </li>
            <li class="division">|</li>
            <li>
                <a href="https://www.urionlinejudge.com.br/judge/pt/contact">Contato</a>            </li>
        </ul>
        
        <div class="site-version">Version 5.4.2.060518</div>
    </div>
</footer>
        </div>

        <script src="./1009 - Salário com Bônus_files/jquery.min.js"></script>

        
	<script src="./1009 - Salário com Bônus_files/auxiliary.min.js"></script>
	<script src="./1009 - Salário com Bônus_files/default.min.js"></script>
<script src="./1009 - Salário com Bônus_files/dropins.js" id="dropboxjs" data-app-key="ccp041xcurfvebt"></script><script src="./1009 - Salário com Bônus_files/ace.js"></script><script src="./1009 - Salário com Bônus_files/ace-languages.js"></script><script src="./1009 - Salário com Bônus_files/ace-languages-forum.js"></script>    

</body></html>