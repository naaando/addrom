Last-Modified: Mon, 12 Dec 2016 01:13:42 GMT
Expires: Mon, 12 Dec 2016 01:18:42 GMT

<!DOCTYPE html>
<html lang='en'>
<head>
<title>addrom.c - addrom - Tool for adding a rom to a PB3 list.dat</title>
<meta name='generator' content='cgit v1.0'/>
<meta name='robots' content='index, nofollow'/>
<link rel='stylesheet' type='text/css' href='/cgit.css'/>
<link rel='shortcut icon' href='/favicon.ico'/>
<link rel='alternate' title='Atom feed' href='http://git.fifth.space/addrom/atom/addrom.c?h=master' type='application/atom+xml'/>
<link rel='vcs-git' href='git://git.fifth.space/addrom' title='addrom Git repository'/>
</head>
<body>
<div id='cgit'><table id='header'>
<tr>
<td class='logo' rowspan='2'><a href='/'><img src='/cgit.png' alt='cgit logo'/></a></td>
<td class='main'><a href='/'>index</a> : <a title='addrom' href='/addrom/'>addrom</a></td><td class='form'><form method='get'>
<select name='h' onchange='this.form.submit();'>
<option value='master' selected='selected'>master</option>
</select> <input type='submit' value='switch'/></form></td></tr>
<tr><td class='sub'>Tool for adding a rom to a PB3 list.dat</td><td class='sub right'>Quentin Rameau &lt;quinq@fifth.space&gt;</td></tr></table>
<table class='tabs'><tr><td>
<a href='/addrom/'>summary</a><a href='/addrom/refs/'>refs</a><a href='/addrom/log/addrom.c'>log</a><a class='active' href='/addrom/tree/addrom.c'>tree</a><a href='/addrom/commit/addrom.c'>commit</a><a href='/addrom/diff/addrom.c'>diff</a></td><td class='form'><form class='right' method='get' action='/addrom/log/addrom.c'>
<select name='qt'>
<option value='grep'>log msg</option>
<option value='author'>author</option>
<option value='committer'>committer</option>
<option value='range'>range</option>
</select>
<input class='txt' type='text' size='10' name='q' value=''/>
<input type='submit' value='search'/>
</form>
</td></tr></table>
<div class='path'>path: <a href='/addrom/tree/'>root</a>/<a href='/addrom/tree/addrom.c'>addrom.c</a></div><div class='content'>blob: b49d68239aa61fa5852ae3fbb6b9b963b79d3e2e (<a href='/addrom/plain/addrom.c'>plain</a>)
<table summary='blob content' class='blob'>
<tr><td class='linenumbers'><pre><a id='n1' href='#n1'>1</a>
<a id='n2' href='#n2'>2</a>
<a id='n3' href='#n3'>3</a>
<a id='n4' href='#n4'>4</a>
<a id='n5' href='#n5'>5</a>
<a id='n6' href='#n6'>6</a>
<a id='n7' href='#n7'>7</a>
<a id='n8' href='#n8'>8</a>
<a id='n9' href='#n9'>9</a>
<a id='n10' href='#n10'>10</a>
<a id='n11' href='#n11'>11</a>
<a id='n12' href='#n12'>12</a>
<a id='n13' href='#n13'>13</a>
<a id='n14' href='#n14'>14</a>
<a id='n15' href='#n15'>15</a>
<a id='n16' href='#n16'>16</a>
<a id='n17' href='#n17'>17</a>
<a id='n18' href='#n18'>18</a>
<a id='n19' href='#n19'>19</a>
<a id='n20' href='#n20'>20</a>
<a id='n21' href='#n21'>21</a>
<a id='n22' href='#n22'>22</a>
<a id='n23' href='#n23'>23</a>
<a id='n24' href='#n24'>24</a>
<a id='n25' href='#n25'>25</a>
<a id='n26' href='#n26'>26</a>
<a id='n27' href='#n27'>27</a>
<a id='n28' href='#n28'>28</a>
<a id='n29' href='#n29'>29</a>
<a id='n30' href='#n30'>30</a>
<a id='n31' href='#n31'>31</a>
<a id='n32' href='#n32'>32</a>
<a id='n33' href='#n33'>33</a>
<a id='n34' href='#n34'>34</a>
<a id='n35' href='#n35'>35</a>
<a id='n36' href='#n36'>36</a>
<a id='n37' href='#n37'>37</a>
<a id='n38' href='#n38'>38</a>
<a id='n39' href='#n39'>39</a>
<a id='n40' href='#n40'>40</a>
<a id='n41' href='#n41'>41</a>
<a id='n42' href='#n42'>42</a>
<a id='n43' href='#n43'>43</a>
<a id='n44' href='#n44'>44</a>
<a id='n45' href='#n45'>45</a>
<a id='n46' href='#n46'>46</a>
<a id='n47' href='#n47'>47</a>
<a id='n48' href='#n48'>48</a>
<a id='n49' href='#n49'>49</a>
<a id='n50' href='#n50'>50</a>
<a id='n51' href='#n51'>51</a>
<a id='n52' href='#n52'>52</a>
<a id='n53' href='#n53'>53</a>
<a id='n54' href='#n54'>54</a>
<a id='n55' href='#n55'>55</a>
<a id='n56' href='#n56'>56</a>
<a id='n57' href='#n57'>57</a>
<a id='n58' href='#n58'>58</a>
<a id='n59' href='#n59'>59</a>
<a id='n60' href='#n60'>60</a>
<a id='n61' href='#n61'>61</a>
<a id='n62' href='#n62'>62</a>
<a id='n63' href='#n63'>63</a>
<a id='n64' href='#n64'>64</a>
<a id='n65' href='#n65'>65</a>
<a id='n66' href='#n66'>66</a>
<a id='n67' href='#n67'>67</a>
<a id='n68' href='#n68'>68</a>
<a id='n69' href='#n69'>69</a>
<a id='n70' href='#n70'>70</a>
<a id='n71' href='#n71'>71</a>
<a id='n72' href='#n72'>72</a>
<a id='n73' href='#n73'>73</a>
<a id='n74' href='#n74'>74</a>
<a id='n75' href='#n75'>75</a>
<a id='n76' href='#n76'>76</a>
<a id='n77' href='#n77'>77</a>
<a id='n78' href='#n78'>78</a>
<a id='n79' href='#n79'>79</a>
<a id='n80' href='#n80'>80</a>
<a id='n81' href='#n81'>81</a>
<a id='n82' href='#n82'>82</a>
<a id='n83' href='#n83'>83</a>
<a id='n84' href='#n84'>84</a>
<a id='n85' href='#n85'>85</a>
<a id='n86' href='#n86'>86</a>
<a id='n87' href='#n87'>87</a>
<a id='n88' href='#n88'>88</a>
<a id='n89' href='#n89'>89</a>
<a id='n90' href='#n90'>90</a>
<a id='n91' href='#n91'>91</a>
<a id='n92' href='#n92'>92</a>
<a id='n93' href='#n93'>93</a>
<a id='n94' href='#n94'>94</a>
<a id='n95' href='#n95'>95</a>
<a id='n96' href='#n96'>96</a>
<a id='n97' href='#n97'>97</a>
<a id='n98' href='#n98'>98</a>
<a id='n99' href='#n99'>99</a>
<a id='n100' href='#n100'>100</a>
<a id='n101' href='#n101'>101</a>
<a id='n102' href='#n102'>102</a>
<a id='n103' href='#n103'>103</a>
<a id='n104' href='#n104'>104</a>
<a id='n105' href='#n105'>105</a>
<a id='n106' href='#n106'>106</a>
<a id='n107' href='#n107'>107</a>
<a id='n108' href='#n108'>108</a>
<a id='n109' href='#n109'>109</a>
<a id='n110' href='#n110'>110</a>
<a id='n111' href='#n111'>111</a>
<a id='n112' href='#n112'>112</a>
<a id='n113' href='#n113'>113</a>
<a id='n114' href='#n114'>114</a>
<a id='n115' href='#n115'>115</a>
<a id='n116' href='#n116'>116</a>
<a id='n117' href='#n117'>117</a>
<a id='n118' href='#n118'>118</a>
<a id='n119' href='#n119'>119</a>
<a id='n120' href='#n120'>120</a>
<a id='n121' href='#n121'>121</a>
<a id='n122' href='#n122'>122</a>
<a id='n123' href='#n123'>123</a>
<a id='n124' href='#n124'>124</a>
<a id='n125' href='#n125'>125</a>
<a id='n126' href='#n126'>126</a>
<a id='n127' href='#n127'>127</a>
<a id='n128' href='#n128'>128</a>
<a id='n129' href='#n129'>129</a>
<a id='n130' href='#n130'>130</a>
<a id='n131' href='#n131'>131</a>
<a id='n132' href='#n132'>132</a>
<a id='n133' href='#n133'>133</a>
<a id='n134' href='#n134'>134</a>
<a id='n135' href='#n135'>135</a>
<a id='n136' href='#n136'>136</a>
<a id='n137' href='#n137'>137</a>
<a id='n138' href='#n138'>138</a>
<a id='n139' href='#n139'>139</a>
<a id='n140' href='#n140'>140</a>
<a id='n141' href='#n141'>141</a>
<a id='n142' href='#n142'>142</a>
<a id='n143' href='#n143'>143</a>
<a id='n144' href='#n144'>144</a>
<a id='n145' href='#n145'>145</a>
<a id='n146' href='#n146'>146</a>
<a id='n147' href='#n147'>147</a>
<a id='n148' href='#n148'>148</a>
<a id='n149' href='#n149'>149</a>
<a id='n150' href='#n150'>150</a>
<a id='n151' href='#n151'>151</a>
<a id='n152' href='#n152'>152</a>
<a id='n153' href='#n153'>153</a>
<a id='n154' href='#n154'>154</a>
<a id='n155' href='#n155'>155</a>
<a id='n156' href='#n156'>156</a>
<a id='n157' href='#n157'>157</a>
<a id='n158' href='#n158'>158</a>
<a id='n159' href='#n159'>159</a>
<a id='n160' href='#n160'>160</a>
<a id='n161' href='#n161'>161</a>
<a id='n162' href='#n162'>162</a>
<a id='n163' href='#n163'>163</a>
<a id='n164' href='#n164'>164</a>
<a id='n165' href='#n165'>165</a>
<a id='n166' href='#n166'>166</a>
<a id='n167' href='#n167'>167</a>
<a id='n168' href='#n168'>168</a>
<a id='n169' href='#n169'>169</a>
<a id='n170' href='#n170'>170</a>
<a id='n171' href='#n171'>171</a>
<a id='n172' href='#n172'>172</a>
<a id='n173' href='#n173'>173</a>
<a id='n174' href='#n174'>174</a>
<a id='n175' href='#n175'>175</a>
<a id='n176' href='#n176'>176</a>
<a id='n177' href='#n177'>177</a>
<a id='n178' href='#n178'>178</a>
<a id='n179' href='#n179'>179</a>
<a id='n180' href='#n180'>180</a>
<a id='n181' href='#n181'>181</a>
<a id='n182' href='#n182'>182</a>
<a id='n183' href='#n183'>183</a>
<a id='n184' href='#n184'>184</a>
<a id='n185' href='#n185'>185</a>
<a id='n186' href='#n186'>186</a>
<a id='n187' href='#n187'>187</a>
<a id='n188' href='#n188'>188</a>
<a id='n189' href='#n189'>189</a>
<a id='n190' href='#n190'>190</a>
<a id='n191' href='#n191'>191</a>
<a id='n192' href='#n192'>192</a>
<a id='n193' href='#n193'>193</a>
<a id='n194' href='#n194'>194</a>
<a id='n195' href='#n195'>195</a>
<a id='n196' href='#n196'>196</a>
<a id='n197' href='#n197'>197</a>
<a id='n198' href='#n198'>198</a>
<a id='n199' href='#n199'>199</a>
<a id='n200' href='#n200'>200</a>
<a id='n201' href='#n201'>201</a>
<a id='n202' href='#n202'>202</a>
<a id='n203' href='#n203'>203</a>
<a id='n204' href='#n204'>204</a>
<a id='n205' href='#n205'>205</a>
<a id='n206' href='#n206'>206</a>
<a id='n207' href='#n207'>207</a>
<a id='n208' href='#n208'>208</a>
<a id='n209' href='#n209'>209</a>
<a id='n210' href='#n210'>210</a>
<a id='n211' href='#n211'>211</a>
<a id='n212' href='#n212'>212</a>
<a id='n213' href='#n213'>213</a>
<a id='n214' href='#n214'>214</a>
<a id='n215' href='#n215'>215</a>
<a id='n216' href='#n216'>216</a>
</pre></td>
<td class='lines'><pre><code>#include &lt;sys/types.h&gt;
#include &lt;sys/stat.h&gt;

#include &lt;fcntl.h&gt;
#include &lt;inttypes.h&gt;
#include &lt;libgen.h&gt;
#include &lt;stdarg.h&gt;
#include &lt;stdint.h&gt;
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;unistd.h&gt;

#include "arg.h"

#define HEADERSZSZ 4
#define GAMECNTSZ  4
#define HEADERSZ  16
#define CHTITLESZ 64
#define ENTITLESZ 32
#define ROMNAMESZ 16
#define MAGICSZ    8
#define ENTRYSZ   (CHTITLESZ + ENTITLESZ + ROMNAMESZ + MAGICSZ)

#define MAGIC     0x0000000000000000

typedef struct {
	char *chtitle;
	char *entitle;
	char *romname;
} Rom;

char *argv0;
static char *in, *out;
static intmax_t place;

static void
die(const char *errstr, ...)
{
	va_list ap;

	va_start(ap, errstr);
	vfprintf(stderr, errstr, ap);
	va_end(ap);

	exit(1);
}

static void
addrom(char *datfile, const Rom *rom)
{
	ssize_t pos = 0;

	if (rom-&gt;chtitle)
		strncpy(datfile + pos, rom-&gt;chtitle, CHTITLESZ);
	pos += CHTITLESZ;
	if (rom-&gt;entitle)
		strncpy(datfile + pos, rom-&gt;entitle, ENTITLESZ);
	pos += ENTITLESZ;
	if (rom-&gt;romname)
		strncpy(datfile + pos, rom-&gt;romname, ROMNAMESZ);
	pos += ROMNAMESZ;
	*(uint64_t *)(datfile + pos) = MAGIC;
}

static uint32_t
getbingamecount(uint64_t n)
{
	return (n &lt;&lt; 32 &lt;&lt; 6) / 0x88888888;
}

static void
ereadinfile(char *datbuf, const ssize_t size, FILE *infile)
{
	if (fread(datbuf, 1, size, infile) != size)
		die("Couldn't read %zu bytes of input file %s\n", size, in);
}

static void *
ecalloc(const ssize_t size)
{
	char *buf;

	if (!(buf = calloc(size, 1)))
		die("Can't allocate enough memory for buffer\n");

	return buf;
}

static void
usage(void)
{
	die("usage: %s [-c title] [-e title] [-i file] [-n position] -o file -r name\n"
	    "       %s [-c title] [-e title] -i file [-n position] [-o file] -r name\n",
	    basename(argv0), basename(argv0));
}

int
main(int argc, char *argv[])
{
	struct stat st;
	Rom rom = { 0 };
	off_t infilesize;
	size_t outbufsize;
	ssize_t offset;
	FILE *infile, *outfile;
	char *outbuf;
	int infd;

	ARGBEGIN {
	case 'c':
		rom.chtitle = EARGF(usage());
		if (strlen(rom.chtitle) &gt; CHTITLESZ)
			die("Chinese title must be less then than %zu bytes: "
			    "%s\n", CHTITLESZ, rom.chtitle);
		break;
	case 'e':
		rom.entitle = EARGF(usage());
		if (strlen(rom.entitle) &gt; ENTITLESZ)
			die("English title must be less then than %zu bytes: "
			    "%s\n", ENTITLESZ, rom.entitle);
		break;
	case 'i':
		in = EARGF(usage());
		break;
	case 'n':
		place = strtoimax(EARGF(usage()), NULL, 10);
		if (place &lt; 1)
			die("Place must be at least 1: %d\n", place);
		break;
	case 'o':
		out = EARGF(usage());
		break;
	case 'r':
		rom.romname = EARGF(usage());
		if (strlen(rom.romname) &gt; ROMNAMESZ)
			die("Rom name must be less then than %zu bytes: %s\n",
			    ROMNAMESZ, rom.romname);
		break;
	default:
		usage();
		break;
	} ARGEND

	if (!(in || out) || !rom.romname)
		usage();

	if (out &amp;&amp; access(out, F_OK) != -1)
		die("Output file %s exists and will not be overwritten\n",
		    out);

	/* create and populate buffer */
	if (in) { /* from existing file */
		if ((infd = open(in, out ? O_RDONLY : O_RDWR)) == -1)
			die("Can't open input file %s\n", in);

		if (fstat(infd, &amp;st) == -1 || !S_ISREG(st.st_mode))
			die("Input file %s is not a regular file\n", in);

		if ((infilesize = st.st_size) &lt; HEADERSZ)
			die("Corrupted input file %s\n", in);

		if (!(infile = fdopen(infd, out ? "r" : "r+")))
			die("Can't open input file %s\n", in);

		outbufsize = infilesize + ENTRYSZ;

		outbuf = ecalloc(outbufsize);

		if (place == 0 || place * ENTRYSZ + HEADERSZ &gt; infilesize)
			offset = infilesize;
		else
			offset = HEADERSZ + (place - 1) * ENTRYSZ;

		ereadinfile(outbuf, offset, infile);

		addrom(outbuf + offset, &amp;rom);

		ereadinfile(outbuf + offset + ENTRYSZ, infilesize - offset,
		    infile);
	} else { /* from scratch, position is ignored */
		outbufsize = HEADERSZ + ENTRYSZ;

		outbuf = ecalloc(outbufsize);

		offset = HEADERSZ;

		addrom(outbuf + offset, &amp;rom);
	}

	*(uint32_t *)(outbuf) = HEADERSZ;
	*(uint32_t *)(outbuf + HEADERSZSZ) =
	    getbingamecount((outbufsize - HEADERSZ) / ENTRYSZ);

	/* write out buffer */
	if (out &amp;&amp; !(outfile = fopen(out, "w")))
		die("Can't open output file %s\n", out);
	else if (!out &amp;&amp; fseeko(infile, 0, SEEK_SET) == -1)
		die("Couldn't seek input file %s\n", in);

	if (fwrite(outbuf, 1, outbufsize, out ? outfile : infile) !=
	    outbufsize)
		die("Couldn't write all data to file %s\n", out ? out : in);

	if (in &amp;&amp; fclose(infile) == EOF)
		fprintf(stderr, "There was an error while closing input file "
		    "%s\n", in);

	if (out &amp;&amp; fclose(outfile) == EOF)
		fprintf(stderr, "There was an error while closing output file "
		    "%s\n", out);

	free(outbuf);

	return(0);
}
</code></pre></td></tr></table>
</div> <!-- class=content -->
<div class='footer'>generated by <a href='http://git.zx2c4.com/cgit/about/'>cgit v1.0</a> at 2016-12-12 01:13:42 +0000</div>
</div> <!-- id=cgit -->
</body>
</html>
