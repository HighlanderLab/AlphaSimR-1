// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// gebvRR
arma::mat gebvRR(const Rcpp::S4& RRsol, const Rcpp::S4& pop);
RcppExport SEXP AlphaSimR_gebvRR(SEXP RRsolSEXP, SEXP popSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type RRsol(RRsolSEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type pop(popSEXP);
    rcpp_result_gen = Rcpp::wrap(gebvRR(RRsol, pop));
    return rcpp_result_gen;
END_RCPP
}
// gebvGCA
arma::mat gebvGCA(const Rcpp::S4& GCAsol, const Rcpp::S4& pop, bool female);
RcppExport SEXP AlphaSimR_gebvGCA(SEXP GCAsolSEXP, SEXP popSEXP, SEXP femaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type GCAsol(GCAsolSEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type pop(popSEXP);
    Rcpp::traits::input_parameter< bool >::type female(femaleSEXP);
    rcpp_result_gen = Rcpp::wrap(gebvGCA(GCAsol, pop, female));
    return rcpp_result_gen;
END_RCPP
}
// gebvSCA
arma::mat gebvSCA(const Rcpp::S4& SCAsol, const Rcpp::S4& pop);
RcppExport SEXP AlphaSimR_gebvSCA(SEXP SCAsolSEXP, SEXP popSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type SCAsol(SCAsolSEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type pop(popSEXP);
    rcpp_result_gen = Rcpp::wrap(gebvSCA(SCAsol, pop));
    return rcpp_result_gen;
END_RCPP
}
// readMat
arma::mat readMat(std::string fileName, int rows, int cols, char sep, int skipRows, int skipCols);
RcppExport SEXP AlphaSimR_readMat(SEXP fileNameSEXP, SEXP rowsSEXP, SEXP colsSEXP, SEXP sepSEXP, SEXP skipRowsSEXP, SEXP skipColsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fileName(fileNameSEXP);
    Rcpp::traits::input_parameter< int >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< int >::type cols(colsSEXP);
    Rcpp::traits::input_parameter< char >::type sep(sepSEXP);
    Rcpp::traits::input_parameter< int >::type skipRows(skipRowsSEXP);
    Rcpp::traits::input_parameter< int >::type skipCols(skipColsSEXP);
    rcpp_result_gen = Rcpp::wrap(readMat(fileName, rows, cols, sep, skipRows, skipCols));
    return rcpp_result_gen;
END_RCPP
}
// solveUVM
Rcpp::List solveUVM(const arma::mat& y, const arma::mat& X, const arma::mat& Z, const arma::mat& K);
RcppExport SEXP AlphaSimR_solveUVM(SEXP ySEXP, SEXP XSEXP, SEXP ZSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(solveUVM(y, X, Z, K));
    return rcpp_result_gen;
END_RCPP
}
// solveMVM
Rcpp::List solveMVM(const arma::mat& Y, const arma::mat& X, const arma::mat& Z, const arma::mat& K, double tol);
RcppExport SEXP AlphaSimR_solveMVM(SEXP YSEXP, SEXP XSEXP, SEXP ZSEXP, SEXP KSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(solveMVM(Y, X, Z, K, tol));
    return rcpp_result_gen;
END_RCPP
}
// solveMKM
Rcpp::List solveMKM(arma::mat& y, arma::mat& X, arma::field<arma::mat>& Zlist, arma::field<arma::mat>& Klist);
RcppExport SEXP AlphaSimR_solveMKM(SEXP ySEXP, SEXP XSEXP, SEXP ZlistSEXP, SEXP KlistSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::field<arma::mat>& >::type Zlist(ZlistSEXP);
    Rcpp::traits::input_parameter< arma::field<arma::mat>& >::type Klist(KlistSEXP);
    rcpp_result_gen = Rcpp::wrap(solveMKM(y, X, Zlist, Klist));
    return rcpp_result_gen;
END_RCPP
}
// callRRBLUP
Rcpp::List callRRBLUP(arma::mat y, arma::uvec x, arma::vec reps, std::string genoTrain, int nMarker);
RcppExport SEXP AlphaSimR_callRRBLUP(SEXP ySEXP, SEXP xSEXP, SEXP repsSEXP, SEXP genoTrainSEXP, SEXP nMarkerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type reps(repsSEXP);
    Rcpp::traits::input_parameter< std::string >::type genoTrain(genoTrainSEXP);
    Rcpp::traits::input_parameter< int >::type nMarker(nMarkerSEXP);
    rcpp_result_gen = Rcpp::wrap(callRRBLUP(y, x, reps, genoTrain, nMarker));
    return rcpp_result_gen;
END_RCPP
}
// callRRBLUP_MV
Rcpp::List callRRBLUP_MV(arma::mat Y, arma::uvec x, arma::vec reps, std::string genoTrain, int nMarker);
RcppExport SEXP AlphaSimR_callRRBLUP_MV(SEXP YSEXP, SEXP xSEXP, SEXP repsSEXP, SEXP genoTrainSEXP, SEXP nMarkerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type reps(repsSEXP);
    Rcpp::traits::input_parameter< std::string >::type genoTrain(genoTrainSEXP);
    Rcpp::traits::input_parameter< int >::type nMarker(nMarkerSEXP);
    rcpp_result_gen = Rcpp::wrap(callRRBLUP_MV(Y, x, reps, genoTrain, nMarker));
    return rcpp_result_gen;
END_RCPP
}
// callRRBLUP_GCA
Rcpp::List callRRBLUP_GCA(arma::mat y, arma::uvec x, arma::vec reps, std::string genoFemale, std::string genoMale, int nMarker);
RcppExport SEXP AlphaSimR_callRRBLUP_GCA(SEXP ySEXP, SEXP xSEXP, SEXP repsSEXP, SEXP genoFemaleSEXP, SEXP genoMaleSEXP, SEXP nMarkerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type reps(repsSEXP);
    Rcpp::traits::input_parameter< std::string >::type genoFemale(genoFemaleSEXP);
    Rcpp::traits::input_parameter< std::string >::type genoMale(genoMaleSEXP);
    Rcpp::traits::input_parameter< int >::type nMarker(nMarkerSEXP);
    rcpp_result_gen = Rcpp::wrap(callRRBLUP_GCA(y, x, reps, genoFemale, genoMale, nMarker));
    return rcpp_result_gen;
END_RCPP
}
// callRRBLUP_SCA
Rcpp::List callRRBLUP_SCA(arma::mat y, arma::uvec x, arma::vec reps, std::string genoFemale, std::string genoMale, int nMarker);
RcppExport SEXP AlphaSimR_callRRBLUP_SCA(SEXP ySEXP, SEXP xSEXP, SEXP repsSEXP, SEXP genoFemaleSEXP, SEXP genoMaleSEXP, SEXP nMarkerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type reps(repsSEXP);
    Rcpp::traits::input_parameter< std::string >::type genoFemale(genoFemaleSEXP);
    Rcpp::traits::input_parameter< std::string >::type genoMale(genoMaleSEXP);
    Rcpp::traits::input_parameter< int >::type nMarker(nMarkerSEXP);
    rcpp_result_gen = Rcpp::wrap(callRRBLUP_SCA(y, x, reps, genoFemale, genoMale, nMarker));
    return rcpp_result_gen;
END_RCPP
}
// calcG
arma::mat calcG(arma::mat X);
RcppExport SEXP AlphaSimR_calcG(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(calcG(X));
    return rcpp_result_gen;
END_RCPP
}
// calcGIbs
arma::mat calcGIbs(arma::mat X);
RcppExport SEXP AlphaSimR_calcGIbs(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(calcGIbs(X));
    return rcpp_result_gen;
END_RCPP
}
// fastDist
arma::mat fastDist(const arma::mat& X);
RcppExport SEXP AlphaSimR_fastDist(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(fastDist(X));
    return rcpp_result_gen;
END_RCPP
}
// fastPairDist
arma::mat fastPairDist(const arma::mat& X, const arma::mat& Y);
RcppExport SEXP AlphaSimR_fastPairDist(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(fastPairDist(X, Y));
    return rcpp_result_gen;
END_RCPP
}
// gaussKernel
arma::mat gaussKernel(arma::mat& D, double theta);
RcppExport SEXP AlphaSimR_gaussKernel(SEXP DSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type D(DSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(gaussKernel(D, theta));
    return rcpp_result_gen;
END_RCPP
}
// writeASGenotypes
void writeASGenotypes(const arma::Cube<unsigned char>& g, const arma::field<arma::uvec>& locations, const arma::uvec& allLocations, const arma::vec& snpchips, const std::vector<std::string>& names, const char missing, const std::string fname);
RcppExport SEXP AlphaSimR_writeASGenotypes(SEXP gSEXP, SEXP locationsSEXP, SEXP allLocationsSEXP, SEXP snpchipsSEXP, SEXP namesSEXP, SEXP missingSEXP, SEXP fnameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::Cube<unsigned char>& >::type g(gSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::uvec>& >::type locations(locationsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type allLocations(allLocationsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type snpchips(snpchipsSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type names(namesSEXP);
    Rcpp::traits::input_parameter< const char >::type missing(missingSEXP);
    Rcpp::traits::input_parameter< const std::string >::type fname(fnameSEXP);
    writeASGenotypes(g, locations, allLocations, snpchips, names, missing, fname);
    return R_NilValue;
END_RCPP
}
// writeASHaplotypes
void writeASHaplotypes(const arma::Cube<unsigned char>& g, const arma::field<arma::uvec>& locations, const arma::uvec& allLocations, const arma::vec& snpchips, const std::vector<std::string>& names, const char missing, const std::string fname);
RcppExport SEXP AlphaSimR_writeASHaplotypes(SEXP gSEXP, SEXP locationsSEXP, SEXP allLocationsSEXP, SEXP snpchipsSEXP, SEXP namesSEXP, SEXP missingSEXP, SEXP fnameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::Cube<unsigned char>& >::type g(gSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::uvec>& >::type locations(locationsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type allLocations(allLocationsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type snpchips(snpchipsSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type names(namesSEXP);
    Rcpp::traits::input_parameter< const char >::type missing(missingSEXP);
    Rcpp::traits::input_parameter< const std::string >::type fname(fnameSEXP);
    writeASHaplotypes(g, locations, allLocations, snpchips, names, missing, fname);
    return R_NilValue;
END_RCPP
}
// getGeno
arma::Mat<unsigned char> getGeno(const arma::field<arma::Cube<unsigned char> >& geno, const arma::ivec& lociPerChr, arma::uvec lociLoc);
RcppExport SEXP AlphaSimR_getGeno(SEXP genoSEXP, SEXP lociPerChrSEXP, SEXP lociLocSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::field<arma::Cube<unsigned char> >& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type lociPerChr(lociPerChrSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type lociLoc(lociLocSEXP);
    rcpp_result_gen = Rcpp::wrap(getGeno(geno, lociPerChr, lociLoc));
    return rcpp_result_gen;
END_RCPP
}
// getDomGeno
arma::imat getDomGeno(const arma::Mat<unsigned char>& geno);
RcppExport SEXP AlphaSimR_getDomGeno(SEXP genoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::Mat<unsigned char>& >::type geno(genoSEXP);
    rcpp_result_gen = Rcpp::wrap(getDomGeno(geno));
    return rcpp_result_gen;
END_RCPP
}
// getHaplo
arma::Mat<unsigned char> getHaplo(const arma::field<arma::Cube<unsigned char> >& geno, const arma::ivec& lociPerChr, arma::uvec lociLoc);
RcppExport SEXP AlphaSimR_getHaplo(SEXP genoSEXP, SEXP lociPerChrSEXP, SEXP lociLocSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::field<arma::Cube<unsigned char> >& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type lociPerChr(lociPerChrSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type lociLoc(lociLocSEXP);
    rcpp_result_gen = Rcpp::wrap(getHaplo(geno, lociPerChr, lociLoc));
    return rcpp_result_gen;
END_RCPP
}
// getOneHaplo
arma::Mat<unsigned char> getOneHaplo(const arma::field<arma::Cube<unsigned char> >& geno, const arma::ivec& lociPerChr, arma::uvec lociLoc, int haplo);
RcppExport SEXP AlphaSimR_getOneHaplo(SEXP genoSEXP, SEXP lociPerChrSEXP, SEXP lociLocSEXP, SEXP haploSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::field<arma::Cube<unsigned char> >& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type lociPerChr(lociPerChrSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type lociLoc(lociLocSEXP);
    Rcpp::traits::input_parameter< int >::type haplo(haploSEXP);
    rcpp_result_gen = Rcpp::wrap(getOneHaplo(geno, lociPerChr, lociLoc, haplo));
    return rcpp_result_gen;
END_RCPP
}
// getGv
arma::field<arma::vec> getGv(const Rcpp::S4& trait, const Rcpp::S4& pop);
RcppExport SEXP AlphaSimR_getGv(SEXP traitSEXP, SEXP popSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type trait(traitSEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type pop(popSEXP);
    rcpp_result_gen = Rcpp::wrap(getGv(trait, pop));
    return rcpp_result_gen;
END_RCPP
}
// calcGenParam
Rcpp::List calcGenParam(const Rcpp::S4& trait, const Rcpp::S4& pop);
RcppExport SEXP AlphaSimR_calcGenParam(SEXP traitSEXP, SEXP popSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type trait(traitSEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type pop(popSEXP);
    rcpp_result_gen = Rcpp::wrap(calcGenParam(trait, pop));
    return rcpp_result_gen;
END_RCPP
}
// getHybridGv
arma::field<arma::vec> getHybridGv(const Rcpp::S4& trait, const Rcpp::S4& motherGeno, arma::uvec& mother, const Rcpp::S4& fatherGeno, arma::uvec& father);
RcppExport SEXP AlphaSimR_getHybridGv(SEXP traitSEXP, SEXP motherGenoSEXP, SEXP motherSEXP, SEXP fatherGenoSEXP, SEXP fatherSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type trait(traitSEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type motherGeno(motherGenoSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type mother(motherSEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type fatherGeno(fatherGenoSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type father(fatherSEXP);
    rcpp_result_gen = Rcpp::wrap(getHybridGv(trait, motherGeno, mother, fatherGeno, father));
    return rcpp_result_gen;
END_RCPP
}
// cross2
arma::field<arma::Cube<unsigned char> > cross2(const arma::field<arma::Cube<unsigned char> >& motherGeno, arma::uvec mother, const arma::field<arma::Cube<unsigned char> >& fatherGeno, arma::uvec father, const arma::field<arma::vec>& genMaps, double recombRatio);
RcppExport SEXP AlphaSimR_cross2(SEXP motherGenoSEXP, SEXP motherSEXP, SEXP fatherGenoSEXP, SEXP fatherSEXP, SEXP genMapsSEXP, SEXP recombRatioSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::field<arma::Cube<unsigned char> >& >::type motherGeno(motherGenoSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type mother(motherSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::Cube<unsigned char> >& >::type fatherGeno(fatherGenoSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type father(fatherSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::vec>& >::type genMaps(genMapsSEXP);
    Rcpp::traits::input_parameter< double >::type recombRatio(recombRatioSEXP);
    rcpp_result_gen = Rcpp::wrap(cross2(motherGeno, mother, fatherGeno, father, genMaps, recombRatio));
    return rcpp_result_gen;
END_RCPP
}
// createDH2
arma::field<arma::Cube<unsigned char> > createDH2(const arma::field<arma::Cube<unsigned char> >& geno, int nDH, const arma::field<arma::vec>& genMaps, double recombRatio, bool useFemale);
RcppExport SEXP AlphaSimR_createDH2(SEXP genoSEXP, SEXP nDHSEXP, SEXP genMapsSEXP, SEXP recombRatioSEXP, SEXP useFemaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::field<arma::Cube<unsigned char> >& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< int >::type nDH(nDHSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::vec>& >::type genMaps(genMapsSEXP);
    Rcpp::traits::input_parameter< double >::type recombRatio(recombRatioSEXP);
    Rcpp::traits::input_parameter< bool >::type useFemale(useFemaleSEXP);
    rcpp_result_gen = Rcpp::wrap(createDH2(geno, nDH, genMaps, recombRatio, useFemale));
    return rcpp_result_gen;
END_RCPP
}
// crossPedigree
arma::field<arma::Cube<unsigned char> > crossPedigree(const arma::field<arma::Cube<unsigned char> >& founders, arma::uvec mother, arma::uvec father, const arma::field<arma::vec>& genMaps);
RcppExport SEXP AlphaSimR_crossPedigree(SEXP foundersSEXP, SEXP motherSEXP, SEXP fatherSEXP, SEXP genMapsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::field<arma::Cube<unsigned char> >& >::type founders(foundersSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type mother(motherSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type father(fatherSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::vec>& >::type genMaps(genMapsSEXP);
    rcpp_result_gen = Rcpp::wrap(crossPedigree(founders, mother, father, genMaps));
    return rcpp_result_gen;
END_RCPP
}
// popVar
arma::mat popVar(const arma::mat& X);
RcppExport SEXP AlphaSimR_popVar(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(popVar(X));
    return rcpp_result_gen;
END_RCPP
}
// mergeGeno
arma::field<arma::Cube<unsigned char> > mergeGeno(const arma::field<arma::Cube<unsigned char> >& x, const arma::field<arma::Cube<unsigned char> >& y);
RcppExport SEXP AlphaSimR_mergeGeno(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::field<arma::Cube<unsigned char> >& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::Cube<unsigned char> >& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(mergeGeno(x, y));
    return rcpp_result_gen;
END_RCPP
}
// calcChrFreq
arma::vec calcChrFreq(const arma::Cube<unsigned char>& geno);
RcppExport SEXP AlphaSimR_calcChrFreq(SEXP genoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::Cube<unsigned char>& >::type geno(genoSEXP);
    rcpp_result_gen = Rcpp::wrap(calcChrFreq(geno));
    return rcpp_result_gen;
END_RCPP
}
// convToImat
arma::imat convToImat(const arma::Mat<unsigned char>& X);
RcppExport SEXP AlphaSimR_convToImat(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::Mat<unsigned char>& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(convToImat(X));
    return rcpp_result_gen;
END_RCPP
}
// sampAllComb
arma::imat sampAllComb(long long int nLevel1, long long int nLevel2, long long int n);
RcppExport SEXP AlphaSimR_sampAllComb(SEXP nLevel1SEXP, SEXP nLevel2SEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< long long int >::type nLevel1(nLevel1SEXP);
    Rcpp::traits::input_parameter< long long int >::type nLevel2(nLevel2SEXP);
    Rcpp::traits::input_parameter< long long int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(sampAllComb(nLevel1, nLevel2, n));
    return rcpp_result_gen;
END_RCPP
}
// sampHalfDialComb
arma::imat sampHalfDialComb(long long int nLevel, long long int n);
RcppExport SEXP AlphaSimR_sampHalfDialComb(SEXP nLevelSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< long long int >::type nLevel(nLevelSEXP);
    Rcpp::traits::input_parameter< long long int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(sampHalfDialComb(nLevel, n));
    return rcpp_result_gen;
END_RCPP
}
// zero
int zero();
RcppExport SEXP AlphaSimR_zero() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(zero());
    return rcpp_result_gen;
END_RCPP
}
// changeId
void changeId(Rcpp::IntegerVector newId, Rcpp::IntegerVector& oldId);
RcppExport SEXP AlphaSimR_changeId(SEXP newIdSEXP, SEXP oldIdSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type newId(newIdSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type oldId(oldIdSEXP);
    changeId(newId, oldId);
    return R_NilValue;
END_RCPP
}
// packHaplo
arma::Cube<unsigned char> packHaplo(arma::Mat<unsigned char>& haplo, arma::uword ploidy, bool inbred);
RcppExport SEXP AlphaSimR_packHaplo(SEXP haploSEXP, SEXP ploidySEXP, SEXP inbredSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::Mat<unsigned char>& >::type haplo(haploSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< bool >::type inbred(inbredSEXP);
    rcpp_result_gen = Rcpp::wrap(packHaplo(haplo, ploidy, inbred));
    return rcpp_result_gen;
END_RCPP
}
// MaCS
Rcpp::List MaCS(Rcpp::String args, long long int maxSites);
RcppExport SEXP AlphaSimR_MaCS(SEXP argsSEXP, SEXP maxSitesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type args(argsSEXP);
    Rcpp::traits::input_parameter< long long int >::type maxSites(maxSitesSEXP);
    rcpp_result_gen = Rcpp::wrap(MaCS(args, maxSites));
    return rcpp_result_gen;
END_RCPP
}
// tuneTraitA
Rcpp::List tuneTraitA(arma::Mat<unsigned char>& geno, arma::vec& addEff, double varG);
RcppExport SEXP AlphaSimR_tuneTraitA(SEXP genoSEXP, SEXP addEffSEXP, SEXP varGSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::Mat<unsigned char>& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type addEff(addEffSEXP);
    Rcpp::traits::input_parameter< double >::type varG(varGSEXP);
    rcpp_result_gen = Rcpp::wrap(tuneTraitA(geno, addEff, varG));
    return rcpp_result_gen;
END_RCPP
}
// tuneTraitAD
Rcpp::List tuneTraitAD(arma::Mat<unsigned char>& geno, arma::vec& addEff, arma::vec& domEff, double varG);
RcppExport SEXP AlphaSimR_tuneTraitAD(SEXP genoSEXP, SEXP addEffSEXP, SEXP domEffSEXP, SEXP varGSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::Mat<unsigned char>& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type addEff(addEffSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type domEff(domEffSEXP);
    Rcpp::traits::input_parameter< double >::type varG(varGSEXP);
    rcpp_result_gen = Rcpp::wrap(tuneTraitAD(geno, addEff, domEff, varG));
    return rcpp_result_gen;
END_RCPP
}
