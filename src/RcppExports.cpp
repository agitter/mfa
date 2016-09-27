// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// log_d_norm
double log_d_norm(double x, double mu, double sigma);
RcppExport SEXP mfa_log_d_norm(SEXP xSEXP, SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(log_d_norm(x, mu, sigma));
    return rcpp_result_gen;
END_RCPP
}
// log_sum_exp
double log_sum_exp(NumericVector x);
RcppExport SEXP mfa_log_sum_exp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(log_sum_exp(x));
    return rcpp_result_gen;
END_RCPP
}
// r_bernoulli_mat
IntegerVector r_bernoulli_mat(NumericMatrix pi);
RcppExport SEXP mfa_r_bernoulli_mat(SEXP piSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type pi(piSEXP);
    rcpp_result_gen = Rcpp::wrap(r_bernoulli_mat(pi));
    return rcpp_result_gen;
END_RCPP
}
// calculate_nuk
NumericVector calculate_nuk(NumericMatrix y, NumericVector pst, NumericVector c, NumericVector tau, NumericVector theta, NumericVector tau_k, LogicalVector which_l);
RcppExport SEXP mfa_calculate_nuk(SEXP ySEXP, SEXP pstSEXP, SEXP cSEXP, SEXP tauSEXP, SEXP thetaSEXP, SEXP tau_kSEXP, SEXP which_lSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pst(pstSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type c(cSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tau_k(tau_kSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type which_l(which_lSEXP);
    rcpp_result_gen = Rcpp::wrap(calculate_nuk(y, pst, c, tau, theta, tau_k, which_l));
    return rcpp_result_gen;
END_RCPP
}
// calculate_lamk
NumericVector calculate_lamk(NumericVector tau_k, NumericVector tau, NumericVector pst, LogicalVector which_l);
RcppExport SEXP mfa_calculate_lamk(SEXP tau_kSEXP, SEXP tauSEXP, SEXP pstSEXP, SEXP which_lSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type tau_k(tau_kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pst(pstSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type which_l(which_lSEXP);
    rcpp_result_gen = Rcpp::wrap(calculate_lamk(tau_k, tau, pst, which_l));
    return rcpp_result_gen;
END_RCPP
}
// sample_k
NumericVector sample_k(NumericMatrix y, NumericVector pst, NumericVector c, NumericVector tau, NumericVector theta, NumericVector tau_k, LogicalVector which_l);
RcppExport SEXP mfa_sample_k(SEXP ySEXP, SEXP pstSEXP, SEXP cSEXP, SEXP tauSEXP, SEXP thetaSEXP, SEXP tau_kSEXP, SEXP which_lSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pst(pstSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type c(cSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tau_k(tau_kSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type which_l(which_lSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_k(y, pst, c, tau, theta, tau_k, which_l));
    return rcpp_result_gen;
END_RCPP
}
// calculate_nuc
NumericVector calculate_nuc(NumericMatrix y, NumericVector pst, NumericVector k, NumericVector tau, double eta, double tau_c, LogicalVector which_l);
RcppExport SEXP mfa_calculate_nuc(SEXP ySEXP, SEXP pstSEXP, SEXP kSEXP, SEXP tauSEXP, SEXP etaSEXP, SEXP tau_cSEXP, SEXP which_lSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pst(pstSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< double >::type tau_c(tau_cSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type which_l(which_lSEXP);
    rcpp_result_gen = Rcpp::wrap(calculate_nuc(y, pst, k, tau, eta, tau_c, which_l));
    return rcpp_result_gen;
END_RCPP
}
// calculate_lamc
NumericVector calculate_lamc(NumericVector tau, double tau_c, int N);
RcppExport SEXP mfa_calculate_lamc(SEXP tauSEXP, SEXP tau_cSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type tau_c(tau_cSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(calculate_lamc(tau, tau_c, N));
    return rcpp_result_gen;
END_RCPP
}
// sample_c
NumericVector sample_c(NumericMatrix y, NumericVector pst, NumericVector k, NumericVector tau, double eta, double tau_c, LogicalVector which_l, int N);
RcppExport SEXP mfa_sample_c(SEXP ySEXP, SEXP pstSEXP, SEXP kSEXP, SEXP tauSEXP, SEXP etaSEXP, SEXP tau_cSEXP, SEXP which_lSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pst(pstSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< double >::type tau_c(tau_cSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type which_l(which_lSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_c(y, pst, k, tau, eta, tau_c, which_l, N));
    return rcpp_result_gen;
END_RCPP
}
// sample_pst
NumericVector sample_pst(NumericMatrix y, NumericMatrix c, NumericMatrix k, double r, NumericVector gamma, NumericVector tau);
RcppExport SEXP mfa_sample_pst(SEXP ySEXP, SEXP cSEXP, SEXP kSEXP, SEXP rSEXP, SEXP gammaSEXP, SEXP tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type c(cSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tau(tauSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_pst(y, c, k, r, gamma, tau));
    return rcpp_result_gen;
END_RCPP
}
// sample_tau
NumericVector sample_tau(NumericMatrix y, NumericMatrix c, NumericMatrix k, NumericVector gamma, NumericVector pst, double alpha, double beta);
RcppExport SEXP mfa_sample_tau(SEXP ySEXP, SEXP cSEXP, SEXP kSEXP, SEXP gammaSEXP, SEXP pstSEXP, SEXP alphaSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type c(cSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pst(pstSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_tau(y, c, k, gamma, pst, alpha, beta));
    return rcpp_result_gen;
END_RCPP
}
// calculate_pi
NumericMatrix calculate_pi(NumericMatrix y, NumericMatrix c, NumericMatrix k, NumericVector pst, NumericVector tau, NumericVector eta, double tau_c, bool collapse, NumericVector log_w);
RcppExport SEXP mfa_calculate_pi(SEXP ySEXP, SEXP cSEXP, SEXP kSEXP, SEXP pstSEXP, SEXP tauSEXP, SEXP etaSEXP, SEXP tau_cSEXP, SEXP collapseSEXP, SEXP log_wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type c(cSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pst(pstSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< double >::type tau_c(tau_cSEXP);
    Rcpp::traits::input_parameter< bool >::type collapse(collapseSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type log_w(log_wSEXP);
    rcpp_result_gen = Rcpp::wrap(calculate_pi(y, c, k, pst, tau, eta, tau_c, collapse, log_w));
    return rcpp_result_gen;
END_RCPP
}
// sample_x
NumericMatrix sample_x(NumericMatrix x, LogicalMatrix is_dropout, NumericVector c0, NumericVector c1, NumericVector k0, NumericVector k1, NumericVector gamma, NumericVector pst, NumericVector tau, double lambda);
RcppExport SEXP mfa_sample_x(SEXP xSEXP, SEXP is_dropoutSEXP, SEXP c0SEXP, SEXP c1SEXP, SEXP k0SEXP, SEXP k1SEXP, SEXP gammaSEXP, SEXP pstSEXP, SEXP tauSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type is_dropout(is_dropoutSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type c0(c0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type c1(c1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type k0(k0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type k1(k1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pst(pstSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_x(x, is_dropout, c0, c1, k0, k1, gamma, pst, tau, lambda));
    return rcpp_result_gen;
END_RCPP
}
