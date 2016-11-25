// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// logreg_cpp
List logreg_cpp(const NumericMatrix& X_, const NumericVector& y_, const NumericVector& b_, const NumericVector& means, const NumericVector& sds, const std::vector<double>& lambda);
RcppExport SEXP rIsing_logreg_cpp(SEXP X_SEXP, SEXP y_SEXP, SEXP b_SEXP, SEXP meansSEXP, SEXP sdsSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y_(y_SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type b_(b_SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type means(meansSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type sds(sdsSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(logreg_cpp(X_, y_, b_, means, sds, lambda));
    return rcpp_result_gen;
END_RCPP
}
// logreg_setup
List logreg_setup(const NumericVector& X, const NumericVector& y, const bool scale, const bool regpath, const unsigned int nlambda, const double lambda_min_ratio);
RcppExport SEXP rIsing_logreg_setup(SEXP XSEXP, SEXP ySEXP, SEXP scaleSEXP, SEXP regpathSEXP, SEXP nlambdaSEXP, SEXP lambda_min_ratioSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const bool >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< const bool >::type regpath(regpathSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type nlambda(nlambdaSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda_min_ratio(lambda_min_ratioSEXP);
    rcpp_result_gen = Rcpp::wrap(logreg_setup(X, y, scale, regpath, nlambda, lambda_min_ratio));
    return rcpp_result_gen;
END_RCPP
}
// regpath_ising
std::vector<double> regpath_ising(const NumericMatrix& Xs_, const NumericVector& y_, const unsigned int nlambda, const double lambda_min_ratio);
RcppExport SEXP rIsing_regpath_ising(SEXP Xs_SEXP, SEXP y_SEXP, SEXP nlambdaSEXP, SEXP lambda_min_ratioSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type Xs_(Xs_SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y_(y_SEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type nlambda(nlambdaSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda_min_ratio(lambda_min_ratioSEXP);
    rcpp_result_gen = Rcpp::wrap(regpath_ising(Xs_, y_, nlambda, lambda_min_ratio));
    return rcpp_result_gen;
END_RCPP
}
// logreg_cpp2
List logreg_cpp2(const NumericMatrix& X_, const NumericVector& y_, const Nullable<NumericVector>& lambda, const unsigned int nlambda, const double lambda_min_ratio, const bool scale);
RcppExport SEXP rIsing_logreg_cpp2(SEXP X_SEXP, SEXP y_SEXP, SEXP lambdaSEXP, SEXP nlambdaSEXP, SEXP lambda_min_ratioSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y_(y_SEXP);
    Rcpp::traits::input_parameter< const Nullable<NumericVector>& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type nlambda(nlambdaSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda_min_ratio(lambda_min_ratioSEXP);
    Rcpp::traits::input_parameter< const bool >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(logreg_cpp2(X_, y_, lambda, nlambda, lambda_min_ratio, scale));
    return rcpp_result_gen;
END_RCPP
}
